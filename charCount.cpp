#include <iostream>
#include <string.h>
using namespace std;

string findUnq(string str){
    int j=0;
    while (j<str.size())
    {
        char x=str[j];
        int count=0;
        if(x!='\0'){
            for(int i=0;i<str.size();i++){
                if(str[i]==x){
                    count++;
                    str[i]='\0';
                }
            }
            cout<< x << " : " <<count<<endl;
        }
        j++;
    }
}

int main (){
    string s="ayan";
    findUnq(s);
    
}