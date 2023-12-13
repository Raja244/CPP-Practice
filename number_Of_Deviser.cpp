#include <iostream>
using namespace std;

int main(){
    int n,count=0,i=1;
    cin>>n;
    while(i<=n){
        if(n%i==0){
            count++;
        }
        i++;
    }
    cout<<count;
}