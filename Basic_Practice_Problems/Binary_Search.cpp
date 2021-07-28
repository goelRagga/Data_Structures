#include <iostream>
#include <vector>
using namespace std;

int Search_Binary(int start, int last, vector<int> arr, int key)
{
    if (last >= start)

    {
        int mid = (start + last) / 2;

        if (key == arr[mid])
        {
            return mid;
        }

        else if (arr[mid] > key)
        {
            return Search_Binary(start, mid - 1, arr, key);
        }

        else
        {
            return Search_Binary(mid + 1, last, arr, key);
        }
    }

    return -1;
}

int main()
{
    int n, key;
    cout << "Enter the Size of the Array" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Array Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to Search : " << endl;
    cin >> key;
    int result = Search_Binary(0, n - 1, arr, key);
    if (result == -1)
    {
        cout << "Key NOT Found!!!" << endl;
    }
    else
    {
        cout << "Key  Found at index " << result << "!!" << endl;
    }
}