#include <iostream>
#include <string>

using namespace std;

int countingValleys(int n, string s)
{

    int count{}, valley{}, max{1};
    for (int i{}; i < n; ++i)
    {
        if (s[i] == 'D')
            count--;
        else
            count++;
        if ((count == 0) && (count > max))
            valley++;
        max = count;
    }
    return valley;
}

int main()
{
    string s{"UDDUDUDUDUUDUDDUD"};
    cout << s << '\n';
    cout << countingValleys(s.size(), s);

    return 0;
}