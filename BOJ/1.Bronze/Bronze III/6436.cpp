#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC = 1, s;
    while(true)
    {
        std::cin >> s;
        if(s == 0)
            break;
        std::cout << "File #" << TC <<'\n';
        TC++;

        s = (s + 1) / 2;
        s += (s + 1) / 2;

        int res = 0;
        while(s>0)
        {
            s -= 30000 * 62;
            res++;
        }
        std::cout << "John needs " << res << " floppies.\n\n";
    }
    return 0;
}