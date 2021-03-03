#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, tmp = 0;
    std::cin >> a >> b;

    while(a!=b)
    {
        if(++a == 360)
            a = 0;
        tmp++;
    }
    if(tmp <= 180)
        std::cout << tmp;
    else
        std::cout << -(360 - tmp);
    return 0;
}