#include <iostream>
#include <string>

using namespace std;

long repeatedString(string s,long n)
{
    long m{};
    for (auto i : s)
    {
        if(i =='a')
            m++;
    }

    if(n%s.size() == 0)
    {
        m*=n/s.size();
    }
    else
    {
        m *=n/s.size();
        for (auto i : s.substr(0,n%s.size()))
            if(i=='a')
            m++;
    }

    return m;
}

int main()
{

    string s;
    cin >> s;
    long l;
    cin >> l;
    cout <<repeatedString(s,l)<<'\n';

    return 0;
}
