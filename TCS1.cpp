#include <iostream>
using namespace std;

void findTheV(int v,int w){

    if(w%2!=0||v>w||w<=2||v*4<w){
        cout << "Invalid Input";
    }else{
        int temp = ((v*4)-w)/2;
        cout<< temp<< " "<<v-temp<<endl;
    }

}

int main(){
    findTheV(100,202);
}