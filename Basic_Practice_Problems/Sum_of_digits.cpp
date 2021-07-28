#include <iostream>
using namespace std;

void getSum(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    cout << "Sum of Digits : " << sum << endl;
}

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    getSum(num);
}