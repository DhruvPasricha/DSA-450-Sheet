#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << reverseWord(s) << endl;
    }
    return 0;
}

string reverseWord(string str)
{

    //Your code here
    int i = 0;
    int j = (int)str.size() - 1;

    while (i < j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
    return str;
}