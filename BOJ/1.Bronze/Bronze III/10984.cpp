#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int n;
        int a;
        double b;
        int a_sum = 0;
        double b_sum = 0;
        std::cin >> n;

        for (int i = 0; i < n; i++)
        {
            std::cin >> a >> b;
            a_sum += a;
            b_sum += a * b;
        }

        printf("%d %.1lf\n", a_sum, b_sum / a_sum);
    }
    return 0;
}