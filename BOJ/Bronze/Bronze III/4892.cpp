#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int i = 1;

    while(true)
    {
        int n0;
        std::cin >> n0;

        if(n0 == 0)
            break;

        int n1 = 3 * n0;

        int n2;
        std::cout << i << ". ";
        if(n1 % 2 == 0)
        {
            n2 = n1 / 2;
            std::cout << "even ";
        }
        else
        {
            n2 = (n1 + 1) / 2;
            std::cout << "odd ";
        }
        int n3 = 3 * n2;

        int n4 = n3 / 9;
        std::cout << n4 << '\n';
        i++;
    }
    return 0;
}