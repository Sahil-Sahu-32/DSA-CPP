#include<iostream>
using namespace std;

int main()
{

// Q1

// int n;
// cout<< "Enter number of lines";
// cin>> n;

// for(int i= 1; i<=n; i++){

//     for (int j = 0; j < n; j++)
//     {
//         cout<< i <<" " ;
//     }
//     cout<< "\n";
// }



// Q2

// int n;
// cout<< "Enter number of lines";
// cin>> n;

// for(int i= 1; i<=n; i++){

//     for (int j = 0; j < i; j++)
//     {
//         cout<< "*" <<"" ;
//     }
//     cout<< "\n";
// }




// Q3

// int n;
// cout<< "Enter number of lines";
// cin>> n;

// for(int i= 0; i<n; i++){

//     for (int j = 0; j < n-i; j++)
//     {
//         cout<< "*" <<" " ;
//     }
//     cout<< "\n";
// }



//  Q4

// int n;
// cout<< "Enter number of lines";
// cin>> n;

// for(int i= 1; i<=n; i++){

//     for (int j = 1; j <= i; j++)
//     {
//         cout<< j <<" " ;
//     }
//     cout<< "\n";
// }



// Q5

// int n;
// cout<< "Enter number of lines";
// cin>> n;
// char character = 'A';
// for(int i= 1; i<=n; i++){

//     for (int j = 0; j < i; j++)
//     {
//         cout<< character <<" " ;
//         character++;
//     }
//     cout<< "\n";
// }



//  Q6

// int n;
// cout<< "Enter number of lines";
// cin>> n;

// for(int i= 1; i<=n; i++){

//     cout<< "*";

//     for (int j = 1; j <= n-1; j++)
//     {
//         if (i == 1 || i == n)
//         {
//             cout<<"*";
//         }else{
//             cout<<" ";
//         }
        
//     }
//      cout<<"*"<<"\n";
// }



// Q7

// int n;
// cout<< "Enter number of lines ";
// cin>> n;

// for (int i = 0; i <n ; i++)
// {
//     for (int j = 0; j < n-i-1; j++)
//     {
//         cout<<" ";
//     }
//     for (int k = 0; k <= i; k++)
//     {
//         cout<<"*";
//     }
    
//     cout<<"\n";
// }


// Q8

// int n;
// cout<< "Enter number of lines ";
// cin>> n;
// int num = 1;
// for (int i = 0; i < n ; i++)
// {
//     for (int j = 0; j < i+1 ; j++)
//     {
//         cout<<num<<" ";
//         num++;
//     }
//     cout<<"\n";
// }



// Q9

// int n;
// cout<< "Enter number of lines ";
// cin>> n;


// For first triangle

// for (int i = 1; i <= n; i++)
// {
//     for (int j = 0; j <= n-i-1; j++)
//     {
//         cout<<" ";
//     }
//     for (int k = 0; k <2*i-1 ; k++)
//     {
//      cout<< "*";   
//     }
//     cout<<"\n";
// }

// For second triangle

// for (int i = n; i >= 1; i--)
// {
//     for (int j = 1; j <=n-i ; j++)
//     {
//         cout<<" ";
//     }
//     for (int k = 1; k <= 2*i-1  ; k++)
//     {
//         cout<< "*";
//     }
//     cout<<"\n";
// }


//  Q10

// int n;
// cout<< "Enter number of lines ";
// cin>> n;

// // First half
// for(int i = n; i >= 1; i--){
     
//     for (int j = 0; j <= n-i; j++)
//     {
//         cout<<"*";
//     }
//     for (int k = 0; k <2*i-2 ; k++)
//     {
//         cout<<" ";
//     }
//     for (int h = 0; h <= n-i; h++)
//     {
//         cout<<"*";
//     }
//     cout<<"\n";
// }

// // Second half
// for (int i = 0; i <n ; i++)
// {
//     for (int j = 0; j < n-i ; j++)
//     {
//         cout<<"*";
//     }
//     for (int k = 0; k < 2*i ; k++)
//     {
//         cout<<" ";
//     }
//     for (int h = 0; h <n-i ; h++)
//     {
//         cout<<"*";
//     }
//     cout<<"\n";
// }


// Q11

// int n;
// cout<< "Enter number of lines ";
// cin>> n;

// bool val = true;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j <= i; j++)
//     {
//         cout<< val <<" ";
//         val = !val;
//     }
//     cout<<"\n";
// }


// Q12

int n;
cout<< "Enter number of lines ";
cin>> n;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n-i-1 ; j++)
    {
        cout<<" ";
    }
    for (int k = 0; k < n; k++)
    {
        cout<<"*";
    }
    cout<<"\n";
}


    return 0;
}