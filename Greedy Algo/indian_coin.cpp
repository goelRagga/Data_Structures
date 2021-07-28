#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N, X;
    cout << "Size of array : " << endl;
    cin >> N;
    vector<int> arr(N);

    cout << "Enter Array Elements : " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the amount to be made : " << endl;
    cin >> X;
    int ans = 0;

    sort(arr.begin(), arr.end(), greater<int>());

    for (int i = 0; i < N; i++)
    {
        ans += X / arr[i];
        X -= X / arr[i] * arr[i];
    }

    cout << "Toal Notes needed : " << ans << endl;
}