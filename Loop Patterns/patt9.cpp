#include <iostream>
using namespace std; 

void pattern (int n){

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        //Star
        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
        
    }

    for (int i = 0; i < n; i++)
    {
        //Space
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        //Star
        for (int k = 0; k < 2*n-(2*i+1); k++)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }
    
    
}


int main(){

    int n=5;
    // for (int i = 3; i <= n; i++)
    // {
        pattern(n);
    // }
    
    
    return 0;
}