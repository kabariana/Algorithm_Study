#include <bits/stdc++.h>

const int SIZE = 101;
const int MAX = 1e5;

int getGCD(int a, int b)
{
    if (a == 0)
        return b;
    return getGCD(b%a, a);
}

int gcd[SIZE][SIZE];
int arr[MAX];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;

    for (int i = 1; i <= SIZE - 1; i++)
        for (int j = 1; j <= SIZE - 1; j++)
            gcd[i][j] = getGCD(i, j);

    while (true)
    {
        std::cin >> n;
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
            std::cin >> arr[i];
        int res = 0;
        for (int i = 1; i <= SIZE - 1; i++)
        {
            int tmp = 0;
            bool flag = false;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] % i != 0)
                {
                    tmp = 0;
                    continue;
                }
                if (tmp == 0)
                    tmp = arr[j];
                else
                    tmp = gcd[tmp][arr[j]];
                if (tmp == i)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                res++;
        }
        std::cout << res << '\n';
        memset(arr, 0, sizeof(arr));
    }
    return 0;
}