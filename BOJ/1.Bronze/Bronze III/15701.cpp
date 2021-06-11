#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, cnt = 0;
    bool flag = false;
    std::cin >> n;

    for(int i = 1; i<= std::sqrt(n); i++)
    {
        if(i*i == n)
        {
            flag = true;
            break;
        }
        if(n%i == 0)
            cnt++;
    }
    if(flag)
        std::cout << cnt*2 + 1 <<'\n';
    else
        std::cout << cnt*2 <<'\n';
    return 0;
}