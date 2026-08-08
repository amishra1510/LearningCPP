#include <iostream>
using namespace std;
void greet(){
    cout<<"Hey"<<endl;
    greet();     // infinte output 
}
int main(){
    greet();
}