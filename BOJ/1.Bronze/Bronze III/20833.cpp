#include<bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int sum = 0;
    for(int i = 1; i<=n; i++)
        sum+=(i*i*i);
    std::cout << sum;
    return 0;
}