#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int i = 0;
    while(true)
    {
        double a, b, c, res = 0;
        std::cin >> a >> b >> c;

        if(!a && !b && !c)
            break;

        std::cout << "Triangle #" << ++i << '\n';
        
        if(a == -1)
        {
            res = std::sqrt(c*c - b*b);
            if(res > 0)
                std::cout << "a = " << std::fixed << std::setprecision(3) << res << '\n';
            else
                std::cout << "Impossible.\n";
        }
        else if(b == -1)
        {
            res = std::sqrt(c*c - a*a);
            if(res > 0)
                std::cout << "b = " << std::fixed << std::setprecision(3) << res << '\n';
            else
                std::cout << "Impossible.\n";

        }
        else
        {
            res = std::sqrt(a*a + b*b);
            if(res > 0)
                std::cout << "c = " << std::fixed << std::setprecision(3) << res << '\n';
            else
                std::cout << "Impossible.\n";
        }
        std::cout << '\n';
    }
    return 0;
}