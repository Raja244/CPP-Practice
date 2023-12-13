#include <iostream>
using namespace std;

int main(){
    while(true){
        int temp;
        cin>>temp;
        if (temp==0)
        {
            exit(0);
        }
        else if(temp%2==0){
            cout<<"Even"<<endl;
        }
        else if(temp%2!=0){
            cout<<"Odd"<<endl;
        }
        else
        {
            cout<<"Wrong Input"<<endl;
        }
    }
}