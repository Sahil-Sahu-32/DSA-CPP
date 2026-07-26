#include <iostream>
using namespace std; 

void pattern (int n){
    for (int i = 0; i < n; i++)
    {
        if (i==0 || i==n-1)
        {
            // for (int j = 0; j < n; j++)
            // {
            //     cout<<"*";
            // }
            cout<< string(n,'*');
            
        }else{
            for (int j = 0; j < n; j++)
            {
                if (j == 0 || j== n-1)
                {
                    cout<<"*";
                }else cout<<" ";
                
            }
            
        }
        cout<<"\n";
    }
    
}

int main(){

    int n=4;
    // for (int i = 3; i <= n; i++)
    // {
        pattern(n);
    // }
    
    
    return 0;
}