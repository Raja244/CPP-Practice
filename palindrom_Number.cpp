#include <iostream>
using namespace std;

int main(){
    int n,pali=0,i;
    cin>>n;
    i=n;
    while(i>0){
        int temp=i%10;
        pali=pali*10+temp;
        i/=10;
    }
    
    if(pali==n){
        cout << n << " is a Palindrome Number";
    }
    else{
        cout << n << " is not a Palindrome Number";
    }
    
}



