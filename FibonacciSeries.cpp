#include <iostream>
using namespace std;

long fab(int n){
    int f=0,j=1,k;
    for(int i=0;i<=n;i++){
    cout<<f<<' ';
        k=f+j;
        f=j;
        j=k;
    }
}

int main(){
    fab(14);
}