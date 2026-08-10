#include <iostream>
using namespace std;
int main(){
int sum  = 0 ;
int arr[3] = {1,2,3};
for(int i = 0; i<3 ; i++){
    sum=sum+arr[i];
}
cout<<sum<<endl;
cout<<sizeof(arr); //4*3=12 bytes
    return 0;
}