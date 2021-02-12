#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    while(T--)
    {
        int n;
        std::cin >> n;

        for(int i = 0; i<n; i++)
        {
            int a, b;
            std::cin >> a >> b;
            std::cout << a + b << ' ' << a*b << '\n'; 
        }
    }
    return 0;
}