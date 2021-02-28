#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    int cnt0 = 0;
    for(int i = 0; i<n; i++)
    {
        int num;
        std::cin >> num;
        if(num == 0)
            cnt0++;
    }
    int cnt1 = n-cnt0;
    std::cout << std::min(cnt0, cnt1);
    return 0;
}