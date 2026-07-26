#include <iostream>
using namespace std; 

void pattern (int n){
   
    for (int i = 0; i < n; i++)
    {
        // Star
        for (int j = 0; j < i+1; j++)       // cout<< string(n - i -1,'*');    Easy way to write it
        {
            cout<<"*";
        }
        // Space
        for (int k = 0; k < 2*(n-i-1); k++)
        {
            cout<<" ";
        }
        // Star
        for (int l = 0; l < i+1; l++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for (int j = 0; j < n; j++)
    {
        // Star
        for (int k = 0; k < n-j-1; k++)
        {
            cout<<"*";
        }
        // Space
        for (int l = 0; l < 2*(j+1); l++)
        {
            cout<<" ";
        }
        // Star
        for (int m = 0; m < n-j-1; m++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    
        
       


}





int main(){

    int n=9;
    // for (int i = 3; i <= n; i++)
    // {
        pattern(n);
    // }
    
    
    return 0;
}