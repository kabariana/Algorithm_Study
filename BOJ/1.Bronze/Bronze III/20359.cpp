#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int o;
    std::cin >> o;
    
    int p = 0;
    while(o%2==0)
    {
        o/=2;
        p++;
    }
    std::cout << o << ' ' << p;
    return 0;
}