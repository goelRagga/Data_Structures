#include <iostream>
using namespace std;

void getReverse(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    cout << "Reverse of the Number is  : " << rev << endl;
}

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    getReverse(num);
}