#include <bits/stdc++.h>
using namespace std;

void prin(int i,int a[],int n){
    if (i>=n/2)
    {
        return;
    }
    swap(a[i],a[n-i-1]);
    prin(i+1,a,n);
    
}


int main(){

int num;
    int a[] ={1,2,3,4,5,6};
    int size = 6;
    prin(0,a,size);
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    
   
return 0;
}