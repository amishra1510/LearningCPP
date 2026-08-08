#include <iostream>
using namespace std;
int main(){
    int x = 12 ;
    int* ptr = &x ;
    cout<<x<<endl;
    *ptr  = 23 ;       // we can update value of variable using its pointer with the help of reference operator
    cout<<*ptr<<endl;  
    return  0 ;
}