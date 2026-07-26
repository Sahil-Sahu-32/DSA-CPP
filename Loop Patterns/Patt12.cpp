#include <iostream>
using namespace std; 

void pattern (int n){

   for (int i = 1; i <= n; i++){
    // Star
    for (int j = 0; j < i; j++)
    {
        cout<< j+1;
    }
    // Space
    for (int k = 0; k < 2*(n-i); k++)
    {
        cout<<" "; 
    }
    //Star
    for (int h = i; h >=1; h--)
    {
        cout<<h;
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