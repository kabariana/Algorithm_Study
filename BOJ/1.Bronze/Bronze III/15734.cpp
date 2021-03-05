#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int l, r, a;
    std::cin >> l >> r >> a;
    int tmp = std::abs(l-r);
    if(tmp == 0)
        std::cout << 2*(l+a/2);
    else
    {
        if(tmp >= a)
            std::cout << 2*(std::min(l, r)+a);
        else
        {
            a-=tmp;
            std::cout << 2*(std::max(l, r) + a/2);
        }
    }
    return 0;
}