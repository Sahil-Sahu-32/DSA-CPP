#include <iostream>
using namespace std;

struct Node
{
    Node* child[2];

    Node()
    {
        child[0] = child[1] = nullptr;
    }
};

void insert(Node* root, int num)
{
    Node* curr = root;

    for(int i = 31; i >= 0; i--)
    {
        int bit = (num >> i) & 1;

        if(curr->child[bit] == nullptr)
            curr->child[bit] = new Node();

        curr = curr->child[bit];
    }
}

int getMaxXor(Node* root, int num)
{
    Node* curr = root;
    int ans = 0;

    for(int i = 31; i >= 0; i--)
    {
        int bit = (num >> i) & 1;

        int opposite = bit ^ 1;

        if(curr->child[opposite])
        {
            ans |= (1 << i);
            curr = curr->child[opposite];
        }
        else
        {
            curr = curr->child[bit];
        }
    }

    return ans;
}

int main()
{
    int arr[] = {3, 10, 5, 25, 2, 8};
    int n = 6;

    Node* root = new Node();

    for(int i = 0; i < n; i++)
        insert(root, arr[i]);

    int maximum = 0;

    for(int i = 0; i < n; i++)
    {
        maximum = max(maximum, getMaxXor(root, arr[i]));
    }

    cout << maximum;

    return 0;
}