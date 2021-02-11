#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    long long s;
    std::cin >> s;

    long long tmp = 0, n = 1;
    int cnt = 0;

    while(true)
    {
        tmp+=n;
        cnt++;
        if(tmp > s)
        {
            cnt--;
            break;
        }
        n++;
    }
    std::cout << cnt;
    return 0;
}