#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, a = 1, b = 1, s, num = 1;
    bool rot = true;
    std::cin >> n;
    for(int i = 0; i<n; i++)
    {
        std::cin >> a >> b >> s;
        num = (num/a)*b;
        rot = s == 1?!rot:rot;
    }
    if(rot)
        std::cout << "0 "<<num;
    else
        std::cout << "1 "<<num;
    return 0;
}