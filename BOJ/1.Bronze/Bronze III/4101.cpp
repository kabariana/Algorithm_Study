#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int a, b;
        std::cin >> a >> b;
        if(a == 0 && b == 0)
            break;
        else
        {
            if(a>b)
                std::cout << "Yes\n";
            else
                std::cout << "No\n";
        }
    }
    return 0;
}