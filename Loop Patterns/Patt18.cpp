
#include <iostream>
using namespace std; 

void pattern (int n){
   
    char ch = 'A';
    for (int i = 0; i < n; i++){
        char word = ch + (n-1);
        for (int j = 0; j < i+1; j++)
        {
            if (j == 0)
            {
                word=word - i;
                cout<< word<<" ";
            }else{cout << word<<" ";}
            word++;
            
        }
        
        cout<<"\n";
    }


}





int main(){

    int n=9;
    // for (int i = 3; i <= n; i++)
    // {
        pattern(n);
    // }
    
    
    return 0;
}