/*. Create two classes: Academic with marks, and Sports with score. Derive a class Result 
that displays both academic marks and sports score. Show how the derived class 
accesses members of both base classes. ((Academic,Sports)Result)*/
#include<iostream>
using namespace std;
class Academic{
    public:
     int marks;
    Academic(){
        cout<<"\n Default constructor: ";
        int marks=100; 
    }
    Academic(int marks){
          cout<<"\n Parametarized account"; 
        this->marks=marks;
    }
    void displayAcademic(){
        cout<<"\n The Academic marks are: "<<marks;
    }
};
class Sports{
    public:
    int score;
    Sports(){
        cout<<"\n Default constructor: ";           
         score=263;
    }
    Sports(int score){
         cout<<"\n Parametarized account"; 
        this->score =score;// this because both parameter name is score
    }
    void displayScore(){
          cout<<"\n The Academic score is: "<<score;
    }
};
class Result: public Academic,public Sports{
    public:
    Result(int marks, int score):Academic(marks),Sports(score){}
    void print(){
        cout<<"Marks is: "<<marks<<endl;
        cout<<"Score is :"<<score<<endl;
    }
};
int main(){
    Result r1(15,15);
    r1.print();
    return 0;
}