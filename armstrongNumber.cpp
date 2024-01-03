#include <iostream>
using namespace std;

int findDeg(long n){
    int count=0;
    while (n!=0)
    {   
        n/=10;
        count++;
    }
    return count;
}

long findPow(int n, int pow){
    long p=1;
    while (pow!=0)
    {   
        p*=n;
        pow--;
    }
    
}

bool findArm(long n){
    int x=n,arm=0,deg=findDeg(n);
    
    while (x!=0)
    {   
        int temp =x%10;
        arm+=findPow(temp,deg);
        x/=10;
    }
    if(arm==n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    cout <<findArm(1513);
}