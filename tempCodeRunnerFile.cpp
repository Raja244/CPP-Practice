#include <iostream>
#include <cstring>
// #include  <bits/stdc++.h>
using namespace std;

// strlen
// strrev
// strcmp
// strcmpi
// strcpy
// strcat
// strlwr
// strupr


int main(){
    char n[26]="raja";
    gets(n);
    int cV=0,cC=0;
    for(int i=0;n[i]!='\0';i++){
        if(n[i]=='A'||n[i]=='E'||n[i]=='I'||n[i]=='O'||n[i]=='U'||n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u'){
            cV++;
        }
        else if((n[i]!=' ')&&(n[i]!='A'||n[i]!='E'||n[i]!='I'||n[i]!='O'||n[i]!='U'||n[i]!='a'||n[i]!='e'||n[i]!='i'||n[i]!='o'||n[i]!='u')){
            cC++;
        }
    }
    cout << "number of Vowels : "<< cV<<endl;
    cout << "number of Consonant : "<< cC<<endl;
    
}