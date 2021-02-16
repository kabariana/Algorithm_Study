#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int x, y;
    bool flag = false;
    std::cin >> x >> y;

    for(int i = 0; i<=x; i++)
    {
        if(2*i - y == x)
        {
            std::cout << i << ' ' << i-y;
            flag = true;
            break;
        }
    }
    if(!flag)
        std::cout << "-1";
    return 0;
}