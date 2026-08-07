#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter value of n: ";
    cin>>n;
    int reverse=0;
    int lastplacedigit;
    while(n != 0){
        lastplacedigit = n % 10;
        reverse = reverse * 10;
        reverse = reverse + lastplacedigit;
        n = n/10;
    }
    cout<<"The reversed number is : "<<reverse;

    return 0;
}