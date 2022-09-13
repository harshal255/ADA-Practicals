#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the value of Inputs : ";
    int n;
    cin >> n;
    int a[n];

    cout << "Enter " << n << " elements :" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Your array is here :"
         << "\t";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;

    int s;
    cout << "What Number You Want To Search : ";
    cin >> s;
    cout << "searching element is " << s << endl;

    for (int i = 0; i < n; i++)
    {

        if (a[i] == s)
        {
            cout << "Your element index is " << i << endl;
            break;
        }
      
    }
   

    return 0;
}