#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int capacity;

    vector<vector<int>> arr;
    for (int i = 0; i < N; i++)
    {
        int weight, value, value_per_weight;
        cin >> weight >> value;
        value_per_weight = value / weight;
        arr.push_back({weight, value, value_per_weight});
    }

    sort(arr.begin(), arr.end(), [&](vector<int> &a, vector<int> &b)
         { return a[2] > b[2]; });

    cout << "Final Values after Sorting" << endl;
    cout << "WEIGHT"
         << " "
         << "VALUE"
         << " "
         << "VALUE/WEIGHT" << endl;

    for (int i = 0; i < N; i++)
    {
        cout << arr[i][0] << " " << arr[i][1] << " " << arr[i][2] << endl;
    }

    int ans = 0;
    int j = 0;
    cout << "enter the capacity of Knapsack: ";
    cin >> capacity;
    cout << endl;
    for (j = 0; j < N; j++)
    {
        if (capacity >= arr[j][0])
        {

            ans += arr[j][1];
            capacity -= arr[j][0];
        }

        else
        {
            int vw = arr[j][2];
            ans += vw * capacity;
            capacity = 0;
            break;
        }
    }

    cout << "Max_Amount: " << ans;
}