#include <bits/stdc++.h>
using namespace std;

 void insertion_sort(int arr[],int n){
    
    for (int i = 1; i < n; i++)
    {
        int curr =arr[i];
        int prev = i-1;
        while (prev >= 0 && arr[prev]> curr)
        {
            arr[prev +1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
        
    }
}

// The time complexity of this short is n^2
// If the array is shorted then time compl will be n

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array:";
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    insertion_sort(arr,n);
    
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    

    return 0;

}