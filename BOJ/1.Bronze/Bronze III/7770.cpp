#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, i = 0, sum = 0;
    std::cin >> n;

    while(sum<=n)
    {
        sum += 2*i*i + 2*i + 1;
        i++;
    }
    std::cout << i - 1;
    return 0;
}