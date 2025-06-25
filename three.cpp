#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (j * j < n)
        {
            i + j;
            j++;
        }
    }

    return 0;
}

// time complexity:O(N * sqrt(N))