#include <iostream>
using namespace std; 

void pattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"* ";
           
        }
        cout<<"\n";
    }
    
}

int main() {
    int n=5;
    
    for (int i = 0; i < n; i++)
    {
        (pattern(i));
    }
    
    return 0;
}