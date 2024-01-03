#include <iostream>
using namespace std;

int findPrecistance(char ch,string str){
    int count=0;
    for(int i=0;i<str.size();i++){
        if(ch==str[i]){
            count++;
        }
    }
    return count;
}

bool findAnagram(string str1,string str2){
    if(str1.size()!=str2.size()){
        return false;
    }
    for(int i=0;i<str1.size();i++){
        if(findPrecistance(str1[i],str1)!=findPrecistance(str1[i],str2))
            return false;
    }
    return true;
}

int main(){
    cout << findAnagram("ayan","naya");
}