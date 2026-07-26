#include <iostream>
using namespace std; 

void pattern (int n){
   
   
    for (int i = 0; i < n; i++){
        // Star
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        // Space
        for (int k = 0; k < 2*i; k++)
        {
            cout<<" ";
        }
        // Star
        for (int l = 0; l < n-i; l++)
        {
            cout<<"*";
        }
        cout<<"\n";
        }

     for (int j = 0; j < n; j++)
     {
        // star
        for (int k = 0; k < j+1; k++)
        {
            cout<<"*";
        }
        // Space
        for (int l = 0; l < 2*(n-j-1); l++)
        {
            cout<<" ";
        }
        // Star
        for (int m = 0; m < j+1; m++)
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