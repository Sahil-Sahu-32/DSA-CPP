#include <iostream>
using namespace std; 

void pattern (int n){
   
    for (int i = 0; i < n; i++)
    {
       char a = 'A';
        for (int j = 0; j < n-i; j++)
        {
            cout<< a<<" ";
            a++;
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