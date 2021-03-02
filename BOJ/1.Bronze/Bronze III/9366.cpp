#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    for(int i = 1; i<=T; i++)
    {
        int a, b, c;
        std::cin >> a >> b >> c;

        std::cout << "Case #"<<i<<": ";
        if(a>=b+c||b>=a+c||c>=a+b)
            std::cout << "invalid!\n";
        else if(a==b&&b==c)
            std::cout << "equilateral\n";
        else if(a==b||b==c||c==a)
            std::cout <<"isosceles\n";
        else
            std::cout <<"scalene\n";
    }
    return 0;
}