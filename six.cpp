#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 100;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    return 0;
}

// time complexity: O(NlogN)