#include <iostream>
using namespace std; 

void pattern (int n){

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }  
        cout<<"\n";
    }

    for (int i = n-1; i >0 ; i--)
    {
        for (int j = 0; j <i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    



}

    int main(){

    int n=7;
    // for (int i = 3; i <= n; i++)
    // {
        pattern(n);
    // }
    
    
    return 0;
}