#include <iostream>
#include <vector>

using namespace std;

long arMan(int n,vector<vector<int>> v)
{
    long *my_array = new long[n+1]{};
    long max{},sum{};
    for (auto i : v)
    {
        my_array[i[0]] += i[2];
        my_array[i[1]] -= i[2];
    }
    for (size_t i{};i<=n;++i)
    {
        sum+=my_array[i];
        max  = max >sum ? max : sum;
    }
    return max;
}
int main()
{

    int a,b;
    cin >>a>>b;
    vector<vector<int>> v;
    int x,y,z;
for (size_t i{};i<b;++i)
    {
        cin >>x>>y>>z;
        v[i].push_back(x);
        v[i].push_back(y);
        v[i].push_back(z);
    }
    cout <<arMan(a,v)<<'\n';
}