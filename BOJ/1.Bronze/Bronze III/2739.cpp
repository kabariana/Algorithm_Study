#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    for(int i = 1; i<=9; i++)
        printf("%d * %d = %d\n", n, i, n*i);
    return 0;
}