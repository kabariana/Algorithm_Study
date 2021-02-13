#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b, c;
    std::cin >> a >> b >> c;

    if(a + b + c != 180)
        std::cout << "Error";
    else
    {
        if(a == b)
        {
            if(b == c)
                std::cout << "Equilateral";
            else
                std::cout << "Isosceles";
        }
        else
        {
            if(b == c)
                std::cout << "Isosceles";
            else
            {
                if(a == c)
                    std::cout << "Isosceles";
                else
                    std::cout << "Scalene";
            }
        }
    }
    return 0;
}