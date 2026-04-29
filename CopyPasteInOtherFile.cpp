#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream read("Mayank.txt");
ofstream write("Write.txt");
string line;
if(!read.is_open()){
    cout<<"Issue with the file"<<endl;
    return 0;
}
while(getline(read,line)){
    write<<line<<endl;
}
write.close();
read.close();
ifstream paste("Write.txt");
//line=" ";
while(getline(paste,line)){
    cout<<"Cursor is: "<<paste.tellg();
    cout<<line<<endl;
}
paste.close();
return 0;
}
  
