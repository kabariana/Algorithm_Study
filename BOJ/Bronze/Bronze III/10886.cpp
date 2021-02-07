#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, surv, cnt = 0;
    std::cin >> n;
    for(int i = 0; i<n; i++)
    {
        std::cin >> surv;
        if(surv == 1)
            cnt++;
    }
    std::cout << cnt << ' ' << n-cnt;
    if(cnt > n-cnt)
        std::cout << "Junhee is cute!";
    else 
        std::cout << "Junhee is not cute!"; 
    return 0;
}