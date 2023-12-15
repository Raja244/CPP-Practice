#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,5,7,8};
    int high=sizeof(arr)/sizeof(arr[0]),low=0,mid,find=4;
    while(high>=low){
        mid=high+low/2;
        if(arr[mid]==find){
            break;
        }
        else if (arr[mid]>=find)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    
    if(high>=low){
        cout <<"find";
    }else{
        cout << "sorry";
    }
    return 0;
}