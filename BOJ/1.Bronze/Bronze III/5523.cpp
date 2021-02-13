#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    int a_cnt = 0, b_cnt = 0;
    std::cin >> n;

    while(n--)
    {
        int a, b;

        std::cin >> a >> b;

        if(a>b)
            a_cnt++;
        else if(a < b)
            b_cnt++;
    }

    std::cout << a_cnt << ' ' << b_cnt;
    return 0;
}