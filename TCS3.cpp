#include <iostream>
using namespace std;

int findTheGreat(int arr[],int n){
    int h=arr[0],count=1;
    for(int i =1;i<n;i++){
        if(arr[i]>=h){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    if(!(n>=1&&n<=20)){
        cout << "Invalid Input";
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp<10000)
            arr[i]=temp;
        else
            cout << "Invalid Input";
            return 0;
        
    }
    cout <<"Number Is : "<< findTheGreat(arr,n);
}