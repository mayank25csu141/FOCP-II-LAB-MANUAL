//. A network security system generates prime numbers in a range for encryption key pools. Implement a 
//solution to find all prime numbers within a given range.
#include<iostream>
using namespace std;
int main(){
    int n,start,end,i;
    cout<<"Enter the starting range:"<<endl;
    cin>>start;
    cout<<"Enter the ending range: "<<endl;
    cin>>end;
    for(n=start;n<=end;n++){
        if(n<=1)
         continue;
         int flag=1;
         for(i=2;i<=n/2;i++){
            if (n % i == 0) {
                flag = 0;   // not prime
                break;
            }
        }

        if (flag == 1)
            cout << n << " ";
    }

    return 0;
}

           

        
    

     
          /* code */
        
        

    

