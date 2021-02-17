#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        std::vector<int> v(5);
        for(int i = 0; i<5; i++)
            std::cin >> v[i];
        std::sort(v.begin(), v.end());
        if(v[3]-v[1]>=4)
            std::cout << "KIN\n";
        else
            std::cout << v[1] + v[2] + v[3] << '\n';
    }
    return 0;
}