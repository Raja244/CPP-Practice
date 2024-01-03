#include <iostream>
using namespace std;

int sumDig(long n){
    int sum=0;
    while (n!=0)
    {
        int temp=n%10;
        sum+=temp;
        n/=10;
    }
    return sum;
}

int sumReq(int n){
    if(n==0)
        return n;
    else
        return n%10+sumReq(n/10);
}

int main(){
    cout<<sumDig(123)<<endl;
    cout<<sumReq(333);
}