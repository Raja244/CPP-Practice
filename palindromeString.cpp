#include <iostream>
#include <string>
using namespace std;

bool checkPali(string str){
    int size=0;
    while (str[size]!='\0')
    {
        size++;
    }
    
    for(int i=0;i<size/2;i++){
        if(str[i]!=str[size-i-1])
            return false;
    }
    return true;
}

string rev(string str){
    for(int i=0;i<str.size()/2;i++)
        swap(str[i],str[str.size()-i-1]);
    
    return str;
}

int main(){
    string s="kinnikinnik";
    if(s==rev(s)){
        cout<<true;
    }
    else
        cout << false;
}