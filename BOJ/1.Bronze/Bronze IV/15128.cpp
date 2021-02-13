#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    long long p1, q1, p2, q2;
    
    std::cin >> p1 >> q1 >> p2 >> q2;
    std::cout << ((p1*p2)%(q1*q2*2)==0?"1":"0");
    return 0;
}