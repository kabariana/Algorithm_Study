#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    while(n>1 && n%2 ==0)
        n/=2;

    std::cout << (n == 1);
    return 0;
}