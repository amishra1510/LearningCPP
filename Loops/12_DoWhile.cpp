#include <iostream>
using namespace std;
int main(){
    int i = 11; 
    do{
        cout<<i<<" ";    // it performs action first then checks condition
        i++;
    } while(i<=10);
    
    return 0;
}