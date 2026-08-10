#include <iostream>
using namespace std;
int main(){
int product  = 1 ;
int arr[3] = {2,2,2};
for(int i = 0; i<3 ; i++){
    product=product*arr[i];
}
cout<<product<<endl;
cout<<sizeof(arr); //4*3=12 bytes
    return 0;
}