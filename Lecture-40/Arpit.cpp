#include<iostream>
#include<unordered_map>
#include<map>
#include<list>
using namespace std;
map<int, list<pair<int, int> > > h;
class node
{
public:
    int data;
    node*left;
    node*right;
    node()
    {
        right = left = NULL;
    }
};

class Trie
{
    node*root;
public:
    Trie()
    {
        root = new node();
    }

    void insert(int val)
    {
        node*temp = root;
        for (int i = 31; i >= 0; i--)
        {
            if (((1 << i)&val) > 0) //jo bit check kar rahe h woh 1 thi
            {
                if (temp->right == NULL)
                {
                    temp->right = new node();
                }
                temp = temp->right;
            }
            else
            {
                if (temp->left == NULL)
                {
                    temp->left = new node();
                }
                temp = temp->left;
            }
        }
        temp->data = val;
    }

    int max_xor_helper(int val)
    {
        node*temp = root;
        for (int i = 31; i >= 0; i--) {
            if (( (val & (1 << i)) == 0)) {
                if (temp->right) {
                    temp = temp->right;
                }
                else {
                    temp = temp->left;
                }
            }
            else
            {
                if (temp->left)
                {
                    temp = temp->left;
                }

                else
                {
                    temp = temp->right;
                }
            }
        }
        // cout << temp->data << ", " << val << endl;
        int x = (val ^ temp->data);
        h[x].push_back({temp->data, val});
        return (val ^ temp->data);
    }
    int max_xor(int*a, int n)
    {
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int val = a[i];
            insert(val);
            int result = max_xor_helper(val);
            ans = max(ans, result);
        }
        return ans;
    }
};

int main()
{
    int a[] = {1, 5, 2, 3, 4};
    int n = sizeof(a) / sizeof(int);
    Trie t;
    cout << t.max_xor(a, n) << endl;

    for (auto n : h) {
        cout << n.first << "-->";
        for (auto p : n.second) {
            cout << "(" << p.first << "," << p.second << ") ";
        }
        cout << endl;
    }

    return 0;
}









