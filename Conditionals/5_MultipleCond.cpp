#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(n>99 and n<1000){ //will give true if both true, && can be used too
        cout<<"Three digit number";
    }
    else{
        cout<<"Not a three digit number";
    }
}