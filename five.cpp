#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 100;
    int sum = 0;

    for (int i = 0; i * i < n; i++)
    {
        sum += i;
    }

    int k = 2;

    for (int i = 0; i < n; i++)
    {
        sum += i;
        i *= k;
    }

    return 0;
}

// time complexity O(sqrt(N))