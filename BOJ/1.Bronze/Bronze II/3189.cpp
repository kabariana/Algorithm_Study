#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b, c;
    std::cin >> a >> b >> c;

    int tmp = 1;
    while(tmp <= c) tmp*=10;

    a %= tmp;

    for(int i = 1; i <= tmp; i++)
    {
        a = a*b % tmp;
        if(a == c)
        {
            std::cout << i <<'\n';
            return 0;
        }
    }
    std::cout << "NIKAD\n";
    return 0;
}