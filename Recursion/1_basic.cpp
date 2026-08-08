#include <iostream>
using namespace std;
void greet(){
    cout<<"Hey"<<endl;
    greet();
}
int main(){
    greet();
}