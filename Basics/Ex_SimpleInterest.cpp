#include <iostream>
using namespace std;
int main(){
    float principle = 1000;
    float rate = 30;
    float time = 3;
    float SI = (principle*rate*time)/100;
    cout<<"The simple interest is: "<<endl;
    cout<<SI;
}