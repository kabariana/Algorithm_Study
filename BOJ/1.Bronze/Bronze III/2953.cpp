#include <bits/stdc++.h>

int main()
{
    int arr[5][4];
    int sum[5] = { 0, };

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cin >> arr[i][j];
            sum[i] += arr[i][j];
        }
    }

    int index;
    int max = sum[0];

    for (int i = 0; i < 5; i++)
    {
        if (sum[i] >= max)
        {
            max = sum[i];
            index = i;
        }
    }
    std::cout << index + 1 << ' ' << max;
    return 0;
}