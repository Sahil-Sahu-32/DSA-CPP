#include <bits/stdc++.h>
using namespace std;

int fibonachi(int n){
    if (n<=1)
    {
        return n;
    }
    
    int last = fibonachi(n-1);
    int slast = fibonachi(n-2);
    return last+slast;
}


int main(){

int num;
    cout<<"Enter numbers";
    cin>>num;
   cout<< fibonachi(num);
return 0;
}