#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a = 1, b = 1;
    while(true)
    {
        std::cin >> a >> b;
        if(a == 0 && b == 0)
            break;
        else
            std::cout << a/b << ' ' << a%b << " / " << b << '\n';
    }
    return 0;
}