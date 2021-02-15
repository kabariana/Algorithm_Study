#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int cnt = 0;
    for(int i = 1; i<=500; i++)
    {
        for(int j = 1; j<=500; j++)
        {
            if(i*i - j*j == n)
                cnt++;
        }
    }
    std::cout << cnt;
    return 0;
}