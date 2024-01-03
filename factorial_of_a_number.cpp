#include <iostream>
using namespace std;

long fact(int n){
    long fac=1;
    if(n==0||n==1){
        return 1;
    }
    else{
        while(n!=0){
        fac*=n;
        n--;
        }
    }
    return fac;
}

long fact(int n){
    if(n==0||n==1){
        return 1;
    }else
        return n*fact(n-1);
}

int main(){
    cout<<fact(5);
}