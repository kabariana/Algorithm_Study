#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    while(T--)
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << "You get " << a/b << " piece(s) and your dad gets " << a%b << " piece(s)\n"; 
    }
    return 0;
}