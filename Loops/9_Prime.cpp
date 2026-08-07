#include <iostream>
using namespace std;
int main(){
     int n ;
     cout<<"Enter n: ";
     cin>>n;
     bool flag = true; // we have assumed in starting that number is prime
     for(int i = 2 ; i<=n/2 ; i++ ){
        if(n%i == 0){
            flag = false ; // false means composite   
            break;     // to get out of loop
        }
     }
     if (n==1) cout<<"Neither prime nor composite";
     else if (flag == true){
        cout<<"Prime";
     }
     else{
        cout<<"Not Prime";
     }
}