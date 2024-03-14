#include<iostream>
using namespace std;
class Book{
    private : 
        double price;
    public:
       Book(char *title,double p){
        cout<<"Book name = "<<title<<endl;
        price = p;
       }
       double getPrice() const{ // constanr member function 
        return price;
       }
       void setPrice(double p){ price=p;} //non-const member function
};

int main(){
    const Book aBook("Learn C++ Program",550.50);//const object
    //aBook.setPrice(720); // calling non-const mem. func from cons object
    cout<<aBook.getPrice()<<endl;
    
    Book cplus("Learn C++ Program",550.50);//non- const object
    cout<<cplus.getPrice()<<endl;
    cplus.setPrice(720);
    cout<<cplus.getPrice()<<endl;

    return 0;
}