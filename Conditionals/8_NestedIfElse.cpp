#include <iostream>
using namespace std;
int main(){
   int a, b, c;
   cout<<"Enter first number: ";
   cin>>a;
   cout<<"Enter second number ";
   cin>>b;
   cout<<"Enter third number ";
   cin>>c;
   if(a>b){
    if(a>c){
        cout<<a<<" is greatest";
   }
   else{
    cout<<c<<" is greatest";
   }
}
else{
    if(b>c){
        cout<<b<<" is greatest";
}
}
}