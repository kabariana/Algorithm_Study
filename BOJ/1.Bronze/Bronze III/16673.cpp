#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int c, k, p, sum = 0;
    std::cin >> c >> k >> p;

    for(int i = c; i>0; i--)
        sum+=(k*i+p*i*i);
    std::cout << sum;
    return 0;
}