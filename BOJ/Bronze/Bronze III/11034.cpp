// scanf() 함수의 반환값을 이용하여 푸는 문제
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c) == 3)
    {   
        std::cout << std::max(b-a, c-b) - 1 << '\n';
    }
    return 0;
}