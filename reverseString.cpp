#include <iostream>
using namespace std;
int size(string str){
    int i=0;
    while (str[i]!='\0')
    {
        i++;
    }
    return(i);
}

//first
// string rev(string str){
//     int n=size(str);
//     string strr="";
//     for(int i=n;i>=0;i--){
//         strr=strr+str[i];
//     }
//     return strr;
// }

// Second
string rev(string str){
    int n=size(str);
    for(int i=0;i<n/2;i++){
        char a=str[n-i-1];
        str[n-i-1]=str[i];
        str[i]=a;
    }
    return str;
}

//Third

int main (){
    string s=rev("abcdefgh");
    cout <<s;
}