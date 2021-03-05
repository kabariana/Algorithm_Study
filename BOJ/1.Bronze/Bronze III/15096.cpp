#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    double a = 0, b = 0;

    while(n--)
    {
        int num;
        std::cin >> num;

        if(num!=-1)
            a++, b+=num;
    }
    std::cout << std::fixed << std::setprecision(4) << b/a;
    return 0;
}