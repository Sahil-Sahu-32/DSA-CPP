#include <bits/stdc++.h>
using namespace std;

void prin(int num){
    if(num < 1){
        return ;
    }
    cout<< num<<"\n";
    prin(num-1);

}


int main(){

int num;
    cout<<"Enter numbers";
    cin>>num;
    prin(num);
return 0;
}