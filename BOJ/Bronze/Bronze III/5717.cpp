#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int a, b;
        std::cin >> a >> b;

        if(a == 0 && b == 0)
            break;
        std::cout << a + b <<'\n';
    }
    return 0;
}