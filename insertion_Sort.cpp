#include <iostream>
using namespace std;

int main(){
    int arr[5];
    
    for(int i=0;i<5;i++){
        cin>>arr[i];
        for(int j=0; j<i;j++){
            if(arr[j]>arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    for(int i=0;i<5;i++){
        cout << arr[i]<<" ";
    }
}