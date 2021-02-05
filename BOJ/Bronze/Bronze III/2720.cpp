#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int arr[4] = {25, 10, 5, 1};
    int T, n, r;

    std::cin >> T;

    while(T--)
    {
        std::cin >> n;

        for(int i = 0; i< 4; i++)
        {
            int coin = arr[i];
            r = n/arr[i];
            std::cout << r << ' ';
            n%=arr[i];
        }
        std::cout << '\n';
    }
    return 0;
}