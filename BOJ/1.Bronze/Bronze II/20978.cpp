#include <bits/stdc++.h>

int a[101];
int b[101];

int main(int argc, char* argv[])
{
    int n, m;
    std::cin >> n >> m;

    for(int i = 0; i<n; i++)
    {
        int num;
        std::cin >> num;
        a[num]=1;
    }
    for(int i = 0; i<m; i++)
    {
        int num;
        std::cin >> num;
        b[num]=1;
    }
    for(int i = 1; i<=100; i++)
        if(a[i] + b[i] == 2)
            std::cout << i << '\n';
    return 0;
}