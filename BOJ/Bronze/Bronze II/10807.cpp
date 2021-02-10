#include <bits/stdc++.h>

int p[101];
int q[101];

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    for(int i = 0; i<n; i++)
    {
        int temp;
        std::cin >> temp;
        if(temp >= 0)
            p[temp]++;
        else
            q[std::abs(temp)]++;
    }
    int v;
    std::cin >> v;
    if(v < 0)
        std::cout << q[std::abs(v)];
    else
        std::cout << p[v];
    return 0;
}