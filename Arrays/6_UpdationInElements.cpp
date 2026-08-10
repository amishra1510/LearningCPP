#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<"Array before updation : ";
     for (int i = 0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0 ; i<5 ; i++){
        if (i%2 == 0){
            arr[i]=arr[i]+10;
        }
        else{
            arr[i]=arr[i]*2;
        }
    }
    cout<<"Array after updation : ";
    for (int i = 0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}