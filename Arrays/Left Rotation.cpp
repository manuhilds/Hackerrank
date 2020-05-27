#include <iostream>
#include <vector> 

using namespace std;

vector<int > rotLeft(vector<int> a, int d){
    int m;
    for(int i{};i<d;++i){
        m = a[0];
        for(int j{};j<a.size()-1;++j)
        {
            a[j] = a[j+1];
        }
        a[a.size()-1] = m;
    }
    return a;
}


int main ()
{
    int j{},t{};
    vector<int> v{};
    cin >> j>>t ;
    while(j)
    {
        int i{};
        cin >>i;
        v.push_back(i);
        j--;
    }
    for (auto i : v)
        cout <<i<<" ";
    cout <<'\n';

    for (auto i : rotLeft(v,t))
        cout <<i<<" ";
    cout <<'\n';
    

    return 0;
}