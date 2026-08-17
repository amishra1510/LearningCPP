#include <iostream>
using namespace std;
int main(){
    char a ;
    for (int i = 65 ; i<91 ; i++){
        cout<<i<<"=";
        char a = (char)i;
        cout<<a<<" ";
    }
    return 0;
}