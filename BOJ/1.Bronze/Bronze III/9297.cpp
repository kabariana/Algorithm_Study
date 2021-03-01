#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    for(int i = 1; i<=T; i++)
    {
        int a, b;
        std::cin >> a >> b;

        std::cout << "Case "<<i<<":";
        if(!a)
            std::cout << ' ' << a/b;
        else
        {
            if(a/b)
                std::cout <<' '<< a/b;
            if(a%b)
                std::cout <<' '<<a%b <<'/'<<b;
        }
        std::cout << '\n';
    }
    return 0;
}