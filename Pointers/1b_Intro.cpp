#include <iostream>
using namespace std ;
int main(){
    int x  = 3 ;
    int* ptr ;     // int* is a datatype used to store hexadecimal values for int type pointer
    ptr = &x ;
    cout<<&x<<endl;   // prints address
    cout<<ptr<<endl;  // prints address
    cout<<x<<endl;    // prints value
    cout<<*ptr<<endl; // prints value
    cout<<&ptr<<endl;// prints address of p
}  
//using pointers we can access the value of the variable whose address
// is in the pointer with the help of reference/* operator