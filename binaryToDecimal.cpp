#include <iostream>
using namespace std;

int binaryTodec(long n){
    int dec=0,pow=1;
    while(n!=0){
        int temp=n%2;
        dec+=temp*pow;
        pow*=2;
        n/=10;
    }
    return dec;
}

int main(){
    int dec=binaryTodec(100000000);
    cout<<dec;
}