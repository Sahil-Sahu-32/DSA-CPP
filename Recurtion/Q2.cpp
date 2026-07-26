#include <bits/stdc++.h>
using namespace std;

void prin(int num,int a=1){
    
    if(a > num ){
        return;
    }
    cout<< a<<"\n";
    prin(num,a+1);
}
    
int main(){
    int num;
    cout<<"Enter numbers";
    cin>>num;
    prin(num);
}

