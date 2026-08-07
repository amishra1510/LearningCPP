#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter value of n :";
    cin>>n;
    int lastplace ;
    int product = 1;
    while(n!= 0){
        lastplace = n%10;
        product = product*lastplace;
        n = n/10;
    }
    cout<<"The product of digits is : "<<product;
    return 0;
}