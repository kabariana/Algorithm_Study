#include <bits/stdc++.h>

int a[101];

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    for(int i = 1; i<=n; i++)
    {
        std::cin >> a[i];
        a[i]*=i;
    }

    for(int i = 1; i<=n; i++)
        std::cout << a[i] - a[i-1] << ' ';
    return 0;
}