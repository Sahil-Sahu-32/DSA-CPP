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
   int maxFreq = 0;
    int ans = -1;

    for (auto &p : num) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
            ans = p.first;
        }
    }

    cout << "Most frequent number is: " << ans;

  

    return 0;
}