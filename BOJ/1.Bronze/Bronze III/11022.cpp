#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    for(int i = 1; i<=T; i++)
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << "Case #" << i << ": "<<a << " + " << b << " = " << a+b<< '\n';
    }
    return 0;
}