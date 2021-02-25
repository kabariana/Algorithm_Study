#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b;
    std::cin >> a >> b;

    int cnt = 2;
    while(a - b >= 0)
    {
        int t = a - b;
        a = b;
        b = t;
        cnt++;
    }
    std::cout << cnt;
    return 0;
}