#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, cnt = 0;
    std::cin >> n;

    for(int i = 0; i<100; i++)
    {
        for(int j = 9; j<100; j++)
            if(i + j == n)
                cnt++;
    }
    std::cout << cnt;
    return 0;
}