#include <iostream>
using namespace std; 

void pattern (int n){

    for (int i = n; i >0; i--)
    {
        for (int j = 0; j <i ; j++)
        {
            cout<<"* ";
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