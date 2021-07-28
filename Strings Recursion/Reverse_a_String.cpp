#include <iostream>
#include <string.h>

using namespace std;

void reverse(string s)
{
    //Base Case

    if (s.size() == 0)
    {
        return;
    }

    //recursive case

    string ros = s.substr(1);
    reverse(ros);
    cout << s[0] << "";
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    reverse(s);
}