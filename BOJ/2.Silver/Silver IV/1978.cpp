#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, cnt = 0;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        int num;
        std::cin >> num;
        for(int j = 2; j <= num; j++)
        {
            if(j == num)
                cnt++;
            if(num%j == 0)
                break;  
        }
    }
    std::cout << cnt;
    return 0;
}