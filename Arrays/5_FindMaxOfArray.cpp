#include <iostream>
using namespace std;
int main(){
int arr[5] = {16,41,34,4,21};
int n = sizeof(arr)/4;
int max = INT16_MIN;
for(int i = 0; i<5 ; i++){
    if ( arr[i]>arr[0]){
        max = arr[i];
    }
}
cout<<max;
    return 0;
}