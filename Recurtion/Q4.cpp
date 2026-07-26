#include <bits/stdc++.h>
using namespace std;

void prin(int num,int a=0,int b=1){
    if(b>num){
        cout<< a;
        return;
    }
    a+=b;
    
    prin(num,a,b+1);
}



int main(){

int num;
    cout<<"Enter numbers";
    cin>>num;
    prin(num);
return 0;
}