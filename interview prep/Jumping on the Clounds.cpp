#include <iostream>
#include <vector>
using namespace std;


int min_jump_count(vector<int>);


int main(){

    int n;
    cin >>n;
    vector<int> cloud{};
    for (size_t i = 0; i < n;i++)
    {
        int j{};
        cin >> j;
        cloud.push_back(j);
    }
    cout << min_jump_count(cloud)<<'\n';
    

    return 0;
}

int min_jump_count(vector<int> c)
{
    int count{-1};
    for (size_t i = 0; i < c.size(); i++,count++)
    {
        if(!c[i+2] && i<c.size()-2)
            i++;
    }
    
    return count;
}