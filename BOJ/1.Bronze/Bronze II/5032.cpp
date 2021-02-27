#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int e, f, c;
    std::cin >> e >> f >> c;
    int tmp = e + f, sum = 0;
    while(tmp >= c)
    {
        sum+=tmp/c;
        tmp = tmp/c + tmp%c;
    }
    std::cout << sum;
    return 0;
}