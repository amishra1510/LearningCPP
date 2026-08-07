#include <iostream>
using namespace std;
void usa(){
    cout<<"You are in USA"<<endl;
    return ;
    cout<<"You are in USA"<<endl;  // anything after return is not executed
}

void india(){
    cout<<"You are in India"<<endl;
    usa();   // you can call other functions in diff functions
}    // void return type can be executed without return; command too

int main(){
  cout<<"You are in main"<<endl;  
  india();
  return 0;   
}    // main will always be executed first then the calls