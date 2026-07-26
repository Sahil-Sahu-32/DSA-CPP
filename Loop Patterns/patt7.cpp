#include <iostream>
using namespace std; 

void pattern (int n){

    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < (n-i-1); j++)
        {
            cout<<" ";
        }
        
        //for stare
        for (int k = 0; k < (2*i+1); k++)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }
    
}




int main(){

    int n=5;
    for (int i = 3; i <= n; i++)
    {
        pattern(i);
    }
    
    
    return 0;
}