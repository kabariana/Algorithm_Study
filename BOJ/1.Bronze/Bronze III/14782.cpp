#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int sum = 0;
    for(int i = 1; i<=n; i++)
        if(n%i == 0)
            sum+=i;
    std::cout << sum;
    return 0;
}