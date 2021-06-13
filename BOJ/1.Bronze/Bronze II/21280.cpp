#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, a = 0, b = 0, c;
    std::cin >> n;
    for(int i = 0; i<n; i++)
    {
        int num;
        std::cin >> num;
        if(i > 0){
            a += std::max(c-num, 0);
            b += std::max(num-c, 0);
        }
        c = num;
    }
    std::cout << a << " " << b << '\n';
    return 0;
}