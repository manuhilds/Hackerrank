/*
    input : unordered array(int) no duplicates
    find minimum swaps between any 2 elements to sort the array in ascending order
*/

/*
    expected inputs : 
        -   size of arr : n
        -   n space-separated integers arr[i]
*/

#include <iostream>
#include <vector>

using namespace std;

int minimumSwaps(vector<int> arr){
    int swaps{};
    for (size_t i = 0; i < arr.size();)
    {
        if(arr[i]!=i+1)
        {
            int temp{arr[i]};
            arr[i] = arr[temp-1];
            arr[temp-1] = temp;
            swaps++;
        }
        else
        {
            i++;
        }
        
    }
    return swaps;
}

int main()
{

    int t{};
    vector<int> v{};
    cin >>t;
    while(t)
    {
        int i{};
        cin >>i;
        v.push_back(i);
        t--;
    }
    int res = minimumSwaps(v);
    cout <<res<<'\n';

    
}