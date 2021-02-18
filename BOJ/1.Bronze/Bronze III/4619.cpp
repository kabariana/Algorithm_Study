#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int b, n;
        std::cin >> b >> n;

        if(b==0 && n==0)
            break;
        
        double tmp = std::pow(b, 1.0/n);
        int a1 = tmp, a2 = a1+1;
        long long b1 = std::pow(a1, n), b2 = std::pow(a2, n);
        std::cout << (std::abs(b-b1)<=std::abs(b-b2)?a1:a2) << '\n'; 
    }
    return 0;
}