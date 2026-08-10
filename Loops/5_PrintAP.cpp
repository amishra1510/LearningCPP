#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter value of n : ";
    cin>>n;
    // for(int i = 4; i<=3*n+1 ; i=i+3){  using AP
    //     cout<<i<<" ";
    // }
    int a = 4;
    for (int i = 1 ; i <= n ; i++){
        cout<<a<<" ";
        a = a+3;
    }
} 

// hi
