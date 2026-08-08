#include <iostream>
using namespace std;
void print(int n){
    if (n == 0) return ;    // base case
    print(n-1);            // call
    cout<<n<<endl;         // work
    return;
}
int main(){
    int n ;
    cout<<"Enter value of n : ";
    cin>>n;
    print(n);
    return 0;
}