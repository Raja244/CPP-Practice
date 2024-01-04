#include <iostream>
using namespace std;

void inputTheArry(int arr[],int n){
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}

int maxGuest(int entry[],int exit[],int T){
    int max=0,temp=0;
    
    for(int i=0;i<T;i++){
        temp+=entry[i]- exit[i];
        if(temp>max){
            max=temp;
        }
    }
    return max;
} 

int main(){
    int T;
    cin >> T;
    if(!(T>=1&&T<=25)){
        cout << "invalid Input"<<endl;
        return 0;
    }else{
        int entry[T],exit[T];
        inputTheArry(entry,T);
        inputTheArry(exit,T);
        cout <<"Max Guest : "<<maxGuest(entry,exit,T);
    }
}