#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC;
    std::cin >> TC;
    while(TC--)
    {
        int n;
        std::cin >> n;
        bool flag = true;
        for(int i = 0; i<n; i++)
        {
            int l, r;
            std::cin >> l >> r;
            flag &= l + r == n;
        }
        if(flag)
            std::cout << "no\n";
        else
            std::cout << "yes\n";
    }
    return 0;
}