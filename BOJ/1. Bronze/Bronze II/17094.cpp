#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int s;
    std::cin >> s;
    int t_c = 0, c_c = 0;
    for(int i = 0; i<s; i++)
    {
        char c;
        std::cin >> c;
        if(c == '2')
            t_c++;
    }
    c_c = s - t_c;

    if(t_c == c_c)
        std::cout << "yee";
    else if(t_c > c_c)
        std::cout << "2";
    else
        std::cout << "e";
    return 0;
}