// 입출력 시간초과 주의
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int Q;
    std::cin >> Q;

    for(int i = 0; i<Q; i++)
    {
        int n;
        std::cin >> n;

        if((n&(-n)) == n)
            std::cout << "1\n";
        else
            std::cout << "0\n";
    }
    return 0;
}