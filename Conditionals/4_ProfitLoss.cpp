#include <iostream>
using namespace std;
int main(){
int CP, SP;
cout<<"Enter CP: ";
cin>>CP;
cout<<"Enter SP: ";
cin>>SP;
if(SP>CP){
    cout<<"Seller made Profit of: "<<SP-CP;
}
else if(SP == CP){
    cout<<"Seller made neither Profit nor Loss";
}
else{
    cout<<"Seller suffered loss of: "<<CP-SP;
}
}