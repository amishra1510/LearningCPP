#include <iostream>
using namespace std;
void change(int arr[]){
    arr[0] = 9;
}
int main(){
    int arr[3]={1,2,3};
    for (int i = 0 ; i<=2 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr);
    for (int i = 0 ; i<=2 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}   // arrays are passed by reference  