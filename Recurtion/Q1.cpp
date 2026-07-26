#include <bits/stdc++.h>
using namespace std;

void prin(int num,string name){
    if(num == 0){
    return ;
    }
    cout<< name<<"\n";
    prin(num-1,name);


}

int main(){
    int num;
    cout<<"Enter numbers";
    cin>>num;
    string name;
    cout<<"Enter your name";
    cin >> name;
     
    prin(num,name);
return 0;
}