//Remove duplicates froma string

#include <iostream>
#include <string.h>

using namespace std;

string remove_duplicates(string s)
{

    if (s.size() == 0)
    {
        return "";
    }

    char ch = s[0];

    string ans = remove_duplicates(s.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }
    return ch + ans;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << remove_duplicates(s);
}