//Find Smallest Subarray Size with Sum >X

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int Min_subarray_Length(vector<int> arr, int n, int X)
{
    int start = 0, end = 0, min_length = n + 1;
    int sum = 0;

    while (end < n)
    {

        while (sum <= X && end < n)
        {
            sum += arr[end++];
        }

        while (sum > X && start < n)
        {
            if (end - start < min_length)
                min_length = end - start;

            sum -= arr[start++];
        }
    }
    return min_length;
}

int main()
{
    int n;
    cout << "Enter the size of teh array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int K, X;

    cout << "Enter the value of X : " << endl;
    cin >> X;
    int ans = Min_subarray_Length(arr, n, X);
    if (ans == n + 1)
    {
        cout << "No Such Subarray Found" << endl;
    }
    else
    {
        cout << "Subarray is of length: " << ans << endl;
    }
}