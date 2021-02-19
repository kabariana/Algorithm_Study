#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, c;
    std::cin >> n >> c;

    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        int m, s;
        scanf("%d:%d", &m, &s);
        sum+=m*60+s;
    }
    sum-=(n-1)*c;
    printf("%02d:%02d:%02d", sum/3600, sum%3600/60, sum%3600%60);
    return 0;
}