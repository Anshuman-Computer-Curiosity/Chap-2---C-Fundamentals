#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <cstring>

int main() {
    // Open a log file to write to
    std::ofstream logFile("example.log");

    // Redirect clog to the log file
    std::clog.rdbuf(logFile.rdbuf());

    // Write some log messages
    std::clog << "Starting program...\n";
    std::clog << "Initializing...\n";
    std::clog << "Running...\n";

    // Simulate a delay before writing more logs
    std::cout << "Pausing for 5 seconds...\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "...\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    // Write more log messages
    std::clog << "Finished running.\n";

    // Close the log file
    logFile.close();

    return 0;
}