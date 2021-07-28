//Find the number formed from subarray of size K divisible by 3

#include <iostream>
#include <climits>
#include <vector>
#include <utility>
using namespace std;

void Compute_Number(vector<int> arr, int K)
{
    int sum = 0;
    pair<int, int> ans;
    bool found = false;

    for (int i = 0; i < K; i++)
    {
        sum += arr[i];
    }

    if (sum % 3 == 0)
    {
        ans = make_pair(0, K - 1);
        found = true;
    }

    for (int j = K; j < arr.size(); j++)
    {
        if (found)
        {
            break;
        }

        sum = sum - arr[j - K];
        sum = sum + arr[j];

        if (sum % 3 == 0)
        {
            ans = make_pair(j - K + 1, j);
            found = true;
        }
    }

    if (!found)
    {
        cout << "No Such Subarray Exists" << endl;
    }
    else
    {
        cout << "Subarray is" << endl;
        for (int i = ans.first; i <= ans.second; i++)
        {
            cout << arr[i] << "";
        }
        cout << endl;
    }
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
    Compute_Number(arr, K);
}