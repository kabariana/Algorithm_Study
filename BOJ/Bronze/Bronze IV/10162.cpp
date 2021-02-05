#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int arr[3] = {300, 60, 10};
    int n, r;

    std::cin >> n;

    if(n%10 != 0)
        std::cout << -1;
    else
    {
        for(int i = 0; i<3; i++)
        {
            int button = arr[i];
            r = n/arr[i];
            std::cout << r << ' ';
            n%=arr[i];
        }
    }
    return 0;
}