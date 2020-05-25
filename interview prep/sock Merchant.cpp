#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int sockMerchant(int n, vector<int> ar)
{
    int count{};
    vector<int> pair_id{};
    for (int i{}; i < n; ++i)
    {
        vector<int>::iterator it{find(pair_id.begin(), pair_id.end(), ar[i])};
        if (it == pair_id.end())
        {
            pair_id.push_back(ar[i]);
        }
        else
        {
            count++;
            pair_id.erase(it);
        }
    }
    return count;
}

int main()
{
    vector<int> v{0, 1, 2, 3, 4, 56, 9, 4, 3, 1, 5, 6, 5, 6, 3, 4, 6, 8};
    cout <<sockMerchant(v.size(), v)<<'\n';
}