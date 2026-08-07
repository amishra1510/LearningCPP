#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n :";
cin>>n;
// if(n >= 0){
//     cout<<n<<endl;
// }
// else{
//     cout<<-n<<endl;
// }
if(n<0) n = -n;
cout<<n;
}