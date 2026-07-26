#include <bits/stdc++.h>
using namespace std;

 void selection_sort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)                 
        {
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min]= arr[i];
        arr[i]=temp;
    }
    

}

// The time complexity of this short is n^2

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array:";
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    selection_sort(arr,n);
    
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    

    return 0;

}