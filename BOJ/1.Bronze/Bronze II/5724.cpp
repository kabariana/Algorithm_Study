#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int n;
        std::cin >> n;

        if(n == 0)
            break;

        int cnt = 1; // 한 변의 길이가 n인 사각형 1개
        cnt+=n*n; // 한 변의 길이가 1인 사각형 n^2개
        for(int i = 2; i<n; i++)
            cnt+=i*i;
        
        if(n!=1)
            std::cout << cnt <<'\n';
        else
            std::cout << 1 <<'\n';
    }
    return 0;
}