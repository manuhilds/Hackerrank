#include <iostream>
#include <vector>

using namespace std;

void minimumBribes(vector<int> q)
{
    int ans{};
    
    for(int i = q.size() -1;i>=0;i--)
    {
        if(q[i] - (i+1)>2)
        {
            cout << "Too chaotic" <<'\n';
            return;
        }
        for(int j = max(0,q[i]-2);j<i;j++)
            if(q[j]>q[i]) ans++;
    }
    cout << ans <<'\n';
}


int main()
{
    int t,n; 
    vector<int> v;
    cin >> t;
    for(int i{};i<t;++i)
    {
        cin >> n;

    while(n)
    {
        int i;
        cin >> i;
        v.push_back(i);
        n--;
    }
        minimumBribes(v);
    }

    return 0;
}