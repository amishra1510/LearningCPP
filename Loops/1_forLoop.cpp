#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){      // declaration+condition+increment/updation
        cout<<"Hello World!"<<endl;
    }
} 

// order of working in loop 
//        initilisation
// steps- check conditon
//        work in the block
//        increment/updation of loop variable