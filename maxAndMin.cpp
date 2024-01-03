#include <iostream>
using namespace std;

int findMax(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}


int findMin(int arr[],int n){
    int min=arr[0];
    
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int arr[5]{1,2,6,0,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << findMax(arr,n)<<endl;
    cout << findMin(arr,n)<<endl;
}