#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5; 
    int i = 0, sum = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            sum += j;
            j += 2;
        }
        i++;
    }

    return 0;
}

// time complexity: O(N * N)