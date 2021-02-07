#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(1)
    {
        int a, b, c;
        std::cin >> a >> b >> c;

        if(a == 0 && b == 0 && c == 0)
            break;

        int x = a*a;
        int y = b*b;
        int z = c*c;

        if(x + y == z || x + z == y || y + z == x)
            std::cout << "right\n";
        else   
            std::cout << "wrong\n";
    }
    return 0;
}