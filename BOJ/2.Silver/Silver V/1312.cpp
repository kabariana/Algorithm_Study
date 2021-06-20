#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b, n;
    std::cin >> a >> b >> n;

    if(a % b == 0)
    {
        std::cout << "0\n";
        return 0;
    }

    if(a > b) 
        a %= b;
    int result = 0;
    for(int i = 0; i<n; i++)
    {
        a*=10;
        result = (int)(a/b);
        a %= b;
    }
    std::cout << result <<'\n';
    return 0;
}