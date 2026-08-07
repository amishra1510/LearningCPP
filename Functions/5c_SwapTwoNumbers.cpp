#include <iostream>
using namespace std;
void swap(int x , int y){    
    int temp = x ;
    x = y ;
    y = temp ;
    return ;
}
int main(){
    int x = 12;
    int y = 45 ;
    cout<<x<<" "<<y<<endl;
    swap(x,y);             // pass by value (dabbe main se bahar nhi jaate function me sirf unki values jaati hai. )
    cout<<x<<" "<<y<<endl;
    return 0;
}
// but if we use int& x , int& y as arguments of function, it will work fine.(this concept is k/a pass by reference.)