#include <iostream>
#include <algorithm>
#include <vector>

/*
sockMerchant(int,vector<int>)
get array and its size
return pair values of the array
*/

/*
    simply said : 
        - we create a vector that gets the unique color
        - we create an iterator checking if the vector already contains the current_color
        - if yes, then the color is no longer unique and get erase via the iterator from the pair_id
        - count each removal to get the number of pairs
*/

using namespace std;

int sockMerchant(int n, vector<int> ar)
{
    int count{};
    vector<int> pair_id{}; // create pair_id 
    for (int i{}; i < n; ++i)
    {
        // create iterator, checks if pair_id already contains current color
        vector<int>::iterator it{find(pair_id.begin(), pair_id.end(), ar[i])}; 
        if (it == pair_id.end())
        {
            pair_id.push_back(ar[i]); // add unique color
        }
        else
        {
            count++;                // incremente pair count
            pair_id.erase(it);      // remove paired color
        }
    }
    return count;
}

int main()
{
    vector<int> v{0, 1, 2, 3, 4, 56, 9, 4, 3, 1, 5, 6, 5, 6, 3, 4, 6, 8};
    cout <<sockMerchant(v.size(), v)<<'\n';
}