#include <bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<int , int> num;
    int n;
    cout<<"Enter a number";
    cin>> n;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin>> a;
    num[a]++;
  }

  for(auto a: num)
  {
    cout<< a.first <<"->"<<a.second<<"\n";
  }
  

    return 0;
}