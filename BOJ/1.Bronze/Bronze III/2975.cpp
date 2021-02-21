#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int a, b;
        char c;

        std::cin >> a >> c >> b;
        if(c == 'W')
        {
            if(a == 0 && b == 0)
                break;
            if(a-b>=-200)
                std::cout << a-b << '\n';
            else
                std::cout << "Not allowed\n";
        }
        else if(c == 'D')
            std::cout << a + b << '\n';
    }
    return 0;
}