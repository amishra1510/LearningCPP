#include <iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter value of n : ";
    cin>>n;
    int lastplace;
    int sum = 0;
    while(n!=0){
        lastplace = n%10 ;
        sum = sum + lastplace;
        n = n/10 ;
    }
    cout<<"The sum of digits in n is : "<<sum;
    
    return 0;
}