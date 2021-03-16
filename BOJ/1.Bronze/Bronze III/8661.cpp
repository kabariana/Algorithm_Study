#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int x, k, a, res;
    std::cin >> x >> k >> a;

    res = x%(k+a);
    if(res < k)
        std::cout << "1";
    else
        std::cout << "0";
    return 0;
}