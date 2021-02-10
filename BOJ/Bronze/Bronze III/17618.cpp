#include <bits/stdc++.h>

int getSum(int n)
{
    int sum = 0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(int argc, char* argv[])
{
    int n, cnt = 0;
    std::cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(i % getSum(i) == 0)
            cnt++;
    }
    std::cout << cnt;
    return 0;
}