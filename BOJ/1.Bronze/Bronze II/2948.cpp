#include <bits/stdc++.h>

int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
std::string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int M, D;
    std::cin >> D >> M;

    int cnt = 0;
    for(int i = 0; i<M-1; i++)
        cnt+=month[i];
    cnt += D;

    std::cout << week[(cnt + 2) %7] <<'\n';
    return 0;
}