#include<iostream>
using namespace std;

int reverse(int n){
    int ans =0;
    while(n>0){
    
    int rem = n%10;
    ans = ans *10 + rem;
    n = n/10;
    }
return ans;
}


int main(){
int a;
cout<<"Enter a number:";
cin>> a;

if (a%2==0)
{
    cout<<"Dibiseble by 2"<<"\n";
}else
{
 cout<<"Not divisible by 2.";
}


 cout<< reverse(123);

    return 0;
}