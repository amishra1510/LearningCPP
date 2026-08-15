#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int brr[n] ;    

    for (int i = 0 ; i<n ; i++){
        int j = n-1-i;
        brr[i] = arr[j];
    }

    for (int i = 0 ; i<n ; i++){
        cout<<brr[i]<<" ";
    }
    





    return 0;
}