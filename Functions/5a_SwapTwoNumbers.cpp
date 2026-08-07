# include <iostream>
using namespace std;
int main(){
    int x = 2;
    int y = 5;
    int temp = x;
    x = y ;
    y = temp ;
    cout<<x<<" "<<y<<endl;
    return 0; 
}