#include <iostream>
using namespace std;

int main(){
    int n=20,fbb,a=0,b=1,i=0;
    cout<<a<<" ";
    
    while (i<n)
    {   
        fbb=a+b;
        b=a;
        a=fbb;
        cout<<fbb<<" ";
        i++;
        
    }
    
}