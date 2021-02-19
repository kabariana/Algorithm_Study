#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int i = 1, cnt = 0;
    do
    {
        int tmp = i;
        while(tmp>0)
        {
            if(tmp%10==3||tmp%10==6||tmp%10==9)
                cnt++;
            tmp/=10;
        }
        i++;
    } while (i<=n);

    std::cout << cnt;
    return 0;
}