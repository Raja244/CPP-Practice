#include <iostream>
using namespace std;

void checkTheString(string str){
    int star=0,hash=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='*'){
            star++;
        }else if(str[i]=='#'){
            hash++;
        }
    }
    
    // if(star>hash){
    //     cout << "Positive Integer "<<endl;
    // }else if(star<hash){
    //     cout << "Negative Integer "<<endl;
    // }else{
    //     cout<<"Both are equal"<<endl;
    // }
    
    cout << (star>hash?"Positive Integer" :star<hash?"Negative Integer":star==hash&&star>0&&hash>0?"Both are equal":"String not having any indication ");
    
}

int main (){
    checkTheString("###***   -> Value of S");
}