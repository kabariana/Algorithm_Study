#include<bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    while(T--)
    {
        int a, b, c, sum;
        std::cin >> a >> b >> c;

        sum = a+ b + c;
        
        if(sum==180)
            std::cout << a << ' ' << b << ' ' << c << ' ' << "Seems OK\n";
        else
            std::cout << a << ' ' << b << ' ' << c << ' ' << "Check\n";
    }
    return 0;
}