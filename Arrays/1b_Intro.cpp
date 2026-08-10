#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter size of array : ";
    cin>>n ;
    int arr [n];
    cout<<"Enter elements of array : ";
    for (int i = 1 ; i<=n ; i++){
        cin>>arr[i];
    }
    cout<<"Elements of the array are : ";
    for (int i = 1 ; i<=n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    arr[0] = 100 ; // updating the array element
     cout<<"Elements of the array after updation are : ";
    for (int i = 1 ; i<=n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}