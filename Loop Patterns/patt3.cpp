#include <iostream>
using namespace std; 

void pattern (int n){

    for (int i = 1; i <= n; i++)
    {
        // int a =1;
        for (int j = 1; j <= i; j++)
        {
            cout<< j<<" ";
            // a++;
        }
        cout<<endl;
    }
    
}

int main(){

    int n = 5;
    for (int i = 0; i <= n; i++)
    {
        pattern(i);
    }
    
    return 0;
}