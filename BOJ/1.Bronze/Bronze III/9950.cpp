#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        if(!a&&!b&&!c)
            break;
        if(!a)
            std::cout<<c/b<<' '<<b<<' '<<c<<'\n';
        else if(!b)
            std::cout <<a<<' '<<c/a<<' '<<c<<'\n';
        else
            std::cout <<a<<' '<<b<<' '<<a*b<<'\n';
    }
    return 0;
}