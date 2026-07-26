#include <iostream>
using namespace std; 

void pattern (int n){
   
    char a = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<< a<<" ";
           
        }
        a++;
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