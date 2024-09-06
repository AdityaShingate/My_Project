#include<iostream>
using namespace std;

int main(){
    int a = 5;
    if(true){
        int a = 6;
        cout<<a<<endl;
    }
    cout<<a<<endl;
}