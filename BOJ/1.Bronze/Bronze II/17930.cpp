#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int L, X;
    std::cin >> L >> X;
    int cnt = 0, curr = 0;
    
    while(X--)
    {
        std::string status;
        int p;
        std::cin >> status >> p;

        if(status == "enter")
        {
            if(p + curr > L)
                cnt++;
            else
                curr += p;
        }
        else
            curr -= p;
    }
    std::cout << cnt << '\n';
    return 0;
}