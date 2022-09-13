#include <bits/stdc++.h>
using namespace std;

int binarysearch_ric(int a[], int init, int end, int target)
{
    if (init > end)
    {
        return -1;
    }
    int mid = (init + end) / 2;
    if (a[mid] == target)
    {
        return mid;
    }
    else if (a[mid] > target)
    {
        return binarysearch_ric(a, init, mid - 1, target);
    }
    else
    {
        return binarysearch_ric(a, mid + 1, end, target);
    }
}

int main()
{
    // array input given in sequence
    int n;
    cout << "Enter Total No of Elements : ";
    cin >> n;
    int a[n];
    cout << "Enter all of elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Your Array is :"
         << "\t";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    int s;
    cout << "What Element do you want to search : ";
    cin >> s;

    cout << binarysearch_ric(a, 0, n - 1, s);

    return 0;
}