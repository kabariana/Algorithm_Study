#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    int cnt = 0;
    while(std::cin >> n)
    {
        if(n>0)
            cnt++;
    }
    std::cout << cnt;
}