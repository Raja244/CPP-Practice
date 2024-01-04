#include <iostream>
using namespace std;


int main(){
    int row,col;
    cin>> row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int temp;
            cin >> temp;
            if(temp==0||temp==1){
                arr[i][j]=temp;
            }else{
                cout<<"Invalid Input";
                return 0;
            }
        }
    }
    int highrow=0,cplu=0;
    for(int i=0;i<row;i++){
        int count=0;
        for(int j=0;j<col;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if(count>cplu){
            highrow=i;
            cplu=count;
        }
    }
    cout <<"Row "<<highrow+1;
    
}