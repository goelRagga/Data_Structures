//Move all x in a string to last

#include <iostream>
#include <string.h>

using namespace std;

string move_last(string s)
{

    if (s.size() == 0)
    {
        return "";
    }

    char ch = s[0];

    string ans = move_last(s.substr(1));

    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << move_last(s);
}