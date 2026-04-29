#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("Read.txt");
    string line;
    if(!fin.is_open()){
         cout<<"\n Issue with the file"<<endl;
         return 0;
            }
            int countletters=0;
            int linecount=0;
            while(getline(fin,line)){
                for(int i=0;i<line.length();i++){
                    if(line[i]=' '){
                        countletters++;
                    }
                }
                linecount++;
                cout<<line<<endl;
            }
            cout<<"Letters: "<<countletters<<endl;
            cout<<"Lines: "<<linecount<<endl;
            fin.close();
            return 0;
}