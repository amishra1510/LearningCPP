#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter value of n :";
    cin>>n ;
    int sum = 0 ;
    int lastplacedigit ;
    while(n != 0){
        lastplacedigit = n%10;
        if (lastplacedigit % 2 == 0){
            sum = sum + lastplacedigit;
        }
    n=n/10;
    }
    cout<<"The sum of even digits in n is: "<<sum;

    return 0;
}