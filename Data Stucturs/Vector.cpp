#include <iostream>
#include<vector>
using namespace std; 


int main(){

    vector<int> name;
    name.push_back(2);
    name.emplace_back(4);   // Is faster
    name.push_back(3);
    name.emplace_back(5);   // Is faster

    cout<< name[1] <<" ";

    vector<pair<int, int >> vec;
    auto it = name.begin();
    cout<< *(it)<<" ";
    it++;
    cout<< *(it)<<" ";
    it++;
    cout<< *(it)<<" ";
    it++;



    return 0;
}