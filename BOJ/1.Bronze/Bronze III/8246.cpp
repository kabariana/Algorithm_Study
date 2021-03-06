#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, k, res;
    std::cin >> a >> b >> k;

    res = (a/k)*(b/k)-(std::max(a/k-2, 0)*std::max(b/k-2, 0));
    std::cout << res;
    return 0;
}