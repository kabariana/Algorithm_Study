#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b;
    std::cin >> a >> b;
    int q = a/b, r = a%b, i = 0;
    std::cout << q << '.';
    while(i<1001)
    {
        q = r*10/b;
        std::cout << q;
        r = r*10%b;
        if(r == 0)
            break;
        i++;
    }
    return 0;
}