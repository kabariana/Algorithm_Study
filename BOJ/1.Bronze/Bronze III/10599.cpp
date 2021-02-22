#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;
        
        if(a == 0 && b == 0 && c == 0 && d == 0)
            break;
        
        int max_age = std::abs(std::min(a, b) - std::max(c, d));
        int min_age = std::abs(std::max(a, b) - std::min(c, d)); 
        std::cout << min_age << ' ' << max_age << '\n';
    }
    return 0;
}