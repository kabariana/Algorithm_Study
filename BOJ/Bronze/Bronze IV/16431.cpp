#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int br, bc, dr, dc, jr, jc;
    int cntB, cntD;

    std::cin >> br >> bc >> dr >> dc >> jr >> jc;
    cntB = std::max(std::abs(jr - br), std::abs(jc - bc));
    cntD = std::abs(jr - dr) + std::abs(jc - dc);

    if(cntB < cntD)
        std::cout << "bessie";
    else if(cntB > cntD)
        std::cout << "daisy";
    else
        std::cout << "tie";
    return 0;
}