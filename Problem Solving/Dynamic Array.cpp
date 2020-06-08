#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> seq{},res{}; 
    int lastAnswer{},N,Q,type,x,y;
    cin >> N>>Q;
    vector<vector<int>> seqList(N,vector<int>{});
    while(Q)
    {
        cin>>type>>x>>y;
        if(type == 1)
        {
            seqList[(x^lastAnswer)%N].push_back(y);
        }
        else if (type == 2)
        {
            seq = seqList[(x^lastAnswer)%N];
            lastAnswer = seq[y%seq.size()];
            res.push_back(lastAnswer);
        }
        Q--;
    }
    for(auto i : res)
        cout << i <<'\n';

    return 0;
}