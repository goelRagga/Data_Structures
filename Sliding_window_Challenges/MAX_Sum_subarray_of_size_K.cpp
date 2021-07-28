// Find the Max sum Subarray of Size K & sum <X

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void Max_SUM_subarray(vector<int> arr, int n, int K, int X)
{
    int sum = 0, ans = INT_MIN;
    for (int i = 0; i < K; i++)
    {
        sum += arr[i];
    }
    if (sum < X)
    {
        ans = sum;
    }

    for (int i = K; i < n; i++)
    {
        sum = sum - arr[i - K];
        sum = sum + arr[i];

        if (sum < X)
        {
            ans = max(ans, sum);
        }
    }

    cout << "Final Answer is : " << ans << endl;
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
    cout << "Enter the value of K : " << endl;
    cin >> K;
    cout << "Enter the value of X : " << endl;
    cin >> X;
    Max_SUM_subarray(arr, n, K, X);
}