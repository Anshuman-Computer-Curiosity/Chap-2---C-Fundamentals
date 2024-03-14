#include<iostream>
using namespace std;
class Book{
	private : double price;
	public :
		Book(char* title, double p){ //contructor non-const
            cout<<"Book name = "<<title<<endl;
            price = p;
        }
 		double getPrice() const {return price;} //constant member function
		void setPrice(double p) {     price = p;   } //non-constant member function
 	};
    
	int main(){
		
		const Book aBook("Booktitle",500.0); // const object
        //aBook.setPrice(600);//Errror
		cout<<aBook.getPrice()<<endl; // OK
		
        Book cPlus("Learn C++",565.0); //non-const object
        cout<<cPlus.getPrice()<<endl; // OK
        
		cPlus.setPrice(600);//OK
		
		cout<<cPlus.getPrice()<<endl; // OK

		//aBook.setPrice(545.0); // Error
        return 0;
	}

