#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    int minv = 1001;
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        int num;
        std::cin >> num;

        minv = std::min(minv, num);
        sum+=(num-minv);
    }
    std::cout << sum;
    return 0;
}