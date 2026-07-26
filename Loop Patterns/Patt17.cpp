#include <iostream>
using namespace std; 

void pattern (int n){
   
    for (int i = 0; i < n; i++)
    {
        char a='A';
       // Space 
       for (int  j = 0; j < n-i-1; j++)
       {
            cout<< " ";
       }
       // Character
       
       for (int k = 0; k < 2*i+1; k++)
       {
        cout<< a;
        if (k <(2*i+1)/2)
        {
            a++;
        }else{a--;}
        
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