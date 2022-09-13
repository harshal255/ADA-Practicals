// Longest Common Sequence
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[50], s2[50];

    cout << "Enter The First String : ";

    cin >> s1;

    cout << "Enter The Second String : ";

    cin >> s2;

    int x = 0, y = 0;
    // Length
    while (s1[x] != 0)
    {
        x++;
    }
    while (s2[y] != 0)
    {
        y++;
    }

    // Shift
    for (int i = x - 1; i >= 0; i--)
    {
        s1[i + 1] = s1[i];
        s1[i] = 0;
    }
    for (int i = y - 1; i >= 0; i--)
    {
        s2[i + 1] = s2[i];
        s2[i] = 0;
    }

    // Table Formation
    int t[x + 1][y + 1];
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j <= y; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }
            else if (s1[i] == s2[j])
            {
                t[i][j] = t[i - 1][j - 1] + 1;
            }
            else
            {
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }

    // Table Print
    cout << endl;

    cout << "Required Solution Is Shown Below :" << endl;
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j <= y; j++)
        {

            cout << t[i][j]<<"\t";
        }
        cout << endl;
    }

    // Length Of Logest Sequence

    cout << "The Length Of Longest Common Subsequence Is :" << endl;

    // Tracing Is Shown Below
    int n = t[x][y], n1 = t[x][y];
    char s3[n];
    while (n != 0)
    {
        if (t[x][y] == t[x][y - 1])
        {
            y--;
        }
        else if (t[x][y] == t[x - 1][y])
        {
            x--;
        }
        else
        {
            x--;
            y--;
            n--;
            s3[n] = s1[x + 1];
        }
    }

    // String Reversing
    int z = 0;
    char s4[n1];
    while (z < n1)
    {
        s4[z] = s3[z];
        z++;
    }

    // String Print
    s4[z] = '\0';

    cout << "Longest Common Subsequence : ";

    cout << s4;
}