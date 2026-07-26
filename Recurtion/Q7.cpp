#include <bits/stdc++.h>
using namespace std;

bool prin(int i,string &a){
    if (i>=a.size()/2)
    {
        return true;
    }
    if (a[i] != a[a.size()-i-1])
    {
        return false;
    }
    return prin(i+1,a);
    
}


int main(){

int num;
    string a = "MADAM";
    int size = 6;
    cout<< prin(0,a);
    
   
return 0;
}