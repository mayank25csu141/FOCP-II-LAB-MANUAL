//A game compares three players' scores to find who is ahead. Implement a solution to accept three scores
//and identify the winner.
#include<iostream>
using namespace std;
int main(){
    float score1,score2,score3;
    cout<<"Enter the scores of three players: "<<endl;
    cin>>score1>>score2>>score3;
    if(score1>score2 && score1>score3){
        cout<<"Player 1 is the winner with a score of: "<<score1<<endl;
    }
    else if(score2>score1 && score2>score3){
        cout<<"Player 2 is the winner with a score of: "<<score2<<endl;
    }
    else if(score3>score1 && score3>score2){
        cout<<"Player 3 is the winner with a score of: "<<score3<<endl;
    }
    else{
        cout<<"Its a tie between players."<<endl;
        if(score1==score2 && score1>score3){
            cout<<"Player 1 and Player 2 are tied with a score of: "<<score1<<endl;

        }
        else if(score1==score3 && score1>score2){
            cout<<"Player 1 and PLayer 3 are tied with a score of: "<<score1<<endl;

        }
        else if(score2==score3 && score2>score1){
            cout<<"Player 2 and Player 3 are tied with a score of: "<<score2<<endl;

        }
        else{
            cout<<"All three players are tied with a score of: "<<score1<<endl;
        }
    }
    }
