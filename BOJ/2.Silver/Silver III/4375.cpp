#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    // 나뉘어 떨어지지 않을 때마다 tmp의 값이 (tmp*10+1)로 증가됨
    while(std::cin >> n)
    {   
        int tmp = 1;
        int res = 1;
        while(true)
        {
            if(tmp%n==0)
                break;
            tmp = (tmp*10+1)%n;
            res++;
        }
        std::cout << res << '\n';
    }
    return 0;
}