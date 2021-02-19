// 각 자릿수의 합을 더하여 나온 값으로 나뉘어 떨어질 때까지 n의 값 1씩 증가

#include <bits/stdc++.h>

int get_sum(int n)
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
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, sum;
    std::cin >> n;

    while(true)
    {
        sum = get_sum(n);
        if(n%sum == 0)
            break;
        n++;
    }
    std::cout << n;
    return 0;
}