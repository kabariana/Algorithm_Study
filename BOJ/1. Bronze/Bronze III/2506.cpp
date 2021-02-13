#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, sum = 0, cnt = 0;
    std::cin >> n;

    while(n--)
    {
        int num;
        std::cin >> num;

        if(num == 1)
        {
            cnt++;
            sum+=cnt;
        }
        else if(num == 0)
            cnt = 0;
    }
    std::cout << sum;
    return 0;
}