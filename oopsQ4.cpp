#include<iostream>
using namespace std;
class Book{
    public:
    string title;
    string author;
    double price;
    Book();// Default constructor
    Book(string tit,string aut, double p );
    void displayDetails();
};
    Book::Book(string tit,string aut, double p){
        title=tit;
        author=aut;
        price=p;
    }
    Book::Book(){
        title="Skyfall";
        author="Mayank Gaur";
        price=1000;
    }
    void Book::displayDetails(){
        cout<<"The title of the book is: "<<title<<endl;
        cout<<"Author name is : "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
int main(){
    Book b1,b2("Skyfall","MAYANK",1000);
    b1.displayDetails();
    b2.displayDetails();
    return 0;
} 