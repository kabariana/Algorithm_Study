#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b, c, cnt = 0;
    std::cin >> a >> b >> c;
    bool chk1, chk2, chk3;
    chk1 = chk2 = chk3 = false;

    if(a & 1){
        cnt++;
        chk1 = true;
    }
    if(b & 1){
        cnt++;
        chk2 = true;
    }
    if(c & 1){
        cnt++;
        chk3 = true;
    }

    if(cnt == 3 || !cnt)
        std::cout << a * b * c;
    else if(cnt == 1)
        std::cout << (chk1 ? a : chk2? b: c);
    else
        std::cout << (chk1 && chk2 ? a*b : chk2&&chk3? b*c : a*c);
    return 0;
}