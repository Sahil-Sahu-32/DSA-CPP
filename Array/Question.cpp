#include<iostream>
using namespace std;

int main(){

int nums[] = {5,15,22,1,-15};
int small = INTPTR_MAX;

for (int i = 0; i < 5; i++)
{
    if (nums[i]<small)
    {
        small = nums[i];
    }
    
}

cout<< small;

return 0;
}