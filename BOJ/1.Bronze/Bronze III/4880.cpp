#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int a, b, c;
        std::cin >> a >> b >> c;

        if(a == 0 && b == 0 && c == 0)
            break;

        if(b - a == c - b && b-a != 0)
            std::cout << "AP " << b - a + c << '\n';
        else
            std::cout << "GP " << b/a*c << '\n';
    }
    return 0;
}