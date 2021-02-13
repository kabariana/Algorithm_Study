// 1357번 문제에 TC만 추가된 문제
#include <bits/stdc++.h>

int rev(int n)
{
    int tmp, res = 0;
    while(n>0)
    {
        tmp = n%10;
        n/=10;
        res = res*10 + tmp;
    }
    return res;
}

int main(int argc, char* argv[])
{   
    int T;
    std::cin >> T;
    while(T--)
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << rev(rev(a) + rev(b)) << '\n';
    }
    return 0;
}