#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter n: ";
    cin>>n;
    // (condition) ? if true : if false ;   (syntax of ternary op)
    (n%2 == 0) ? cout<<"even" : cout<<"odd";
}