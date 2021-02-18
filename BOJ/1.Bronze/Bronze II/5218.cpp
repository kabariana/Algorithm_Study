#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    std::cin.ignore();

    while(T--)
    {
        std::string a, b;
        std::cin >> a >> b;

        std::cout << "Distances: ";
        for(int i = 0; a[i]; i++)
        {
            int dist;
            if(a[i]>b[i])
                dist = (b[i]-'A'+26) - (a[i]-'A');
            else
                dist = (b[i]-'A')-(a[i]-'A');
            std::cout << dist << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}