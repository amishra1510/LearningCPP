#include <iostream>
using namespace std;
int main(){
    int x = 2 , y = 5 ;
    x = x+y ;
    y = x-y ;
    x = x-y ;
    cout<<x<<" "<<y<<endl;
    return 0;
}