#include <bits/stdc++.h>

int func(int a, int b, int c, int d)
{
    static const int arr[][2] = {
        {3, 1}, {0, 0}, {0, 1}, {0, 2}, {1, 0},
        {1, 1}, {1, 2}, {2, 0}, {2, 1}, {2, 2},
    };

    return std::abs(arr[b][0] - arr[a][0]) + std::abs(arr[b][1] - arr[a][1]) + 
        std::abs(arr[c][0] - arr[b][0]) + std::abs(arr[c][1] - arr[b][1]) +
        std::abs(arr[d][0] - arr[c][0]) + std::abs(arr[d][1] - arr[c][1]);
}

int main(int argc, char* argv[])
{
    int h, m;
    char ch;
    std::cin >> h >> ch >> m;

    int best = INT_MAX, b_s = -1, b_m = -1;
    for(int i = 0; h + 24 * i < 100; i++)
    {
        for(int j = 0; m + 60 * j < 100; j++)
        {
            int mh = h + 24*i;
            int mm = m + 60*j;
            int tmp = func(mh/10, mh%10, mm/10, mm%10);

            if(tmp < best)
            {
                best = tmp;
                b_s = mh;
                b_m = mm;
            }
        }
    }
    printf("%02d:%02d\n", b_s, b_m);
    return 0;
}