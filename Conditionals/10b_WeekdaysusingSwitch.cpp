#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the day number : ";
    cin>>n;
    switch(n){
        case 1:
            cout<<"The day is monday"<<endl;
            break;
        case 2:
            cout<<"The day is tuesday"<<endl;
            break;
        case 3:
            cout<<"The day is wednesday"<<endl;
            break;
        case 4:
            cout<<"The day is thursday"<<endl;
            break;
        case 5:
            cout<<"The day is friday"<<endl;
            break;
        case 6:
            cout<<"The day is saturday"<<endl;
            break;
        case 7:
            cout<<"The day is sunday"<<endl;
            break;
        default:
            cout<<"Invalid choice!"<<endl;
            break;
        
    }

    return 0;
}