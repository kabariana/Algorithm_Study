#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int a, b, c;
        std::cin >> a >> b >> c;

        if(a == 0 && b == 0 && c == 0)
            break;
        if(a>=b+c || b>=a+c || c>=a+b)
            std::cout << "Invalid\n";
        else if(a==b && b==c)
            std::cout << "Equilateral\n";
        else if(a==b || b==c || c==a)
            std::cout << "Isosceles\n";
        else
            std::cout << "Scalene\n";
    }
}