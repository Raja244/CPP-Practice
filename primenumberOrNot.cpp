#include <iostream>
using namespace std;

bool primeOrNot(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main(){
    cout << primeOrNot(96);
}