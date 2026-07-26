#include <iostream>
using namespace std; 

void pattern (int n){

int start = 1;
for (int i = 0; i < n; i++)
{
    if(i%2==0){
        start =0;
    }else (start =1);

    for (int j = 0; j < i+1; j++)
    {
        cout<<start;
        start = 1- start;
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