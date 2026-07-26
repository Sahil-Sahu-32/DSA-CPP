#include <bits/stdc++.h>
using namespace std;

int prin(int num){
    if(num == 1){
        return 1 ;
    }
    int a = (num * (prin(num-1)));
    
    
    return a;
}



int main(){

int num;
    cout<<"Enter numbers";
    cin>>num;
   cout<< prin(num);
return 0;
}