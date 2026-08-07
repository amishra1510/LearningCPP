#include <iostream>
using namespace std;
void sum(int a , int b){
    cout<<a+b;
    return;
} 
int main(){
    int a ;
    cout<<"Enter 1st number :";
    cin>>a;
    int b ;
    cout<<"Enter 2nd number : ";
    cin>>b;
    sum(a,b);
    return 0;
}