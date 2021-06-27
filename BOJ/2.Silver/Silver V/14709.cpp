#include <bits/stdc++.h>

std::map<int, int> M;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    for(int i = 0; i<n; i++)
    {
        int x, y;
        std::cin >> x >> y;
        M[x]++;
        M[y]++;
    }

    if(M[1] == 2 && M[3] == 2 && M[4] == 2 && M[2] == 0 && M[5] == 0)
        std::cout << "Wa-pa-pa-pa-pa-pa-pow!\n";
    else
        std::cout << "Woof-meow-tweet-squeek\n";
    return 0;
}