#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        std::vector<int> v;
        for(int i = 0; i<10; i++)
        {
            int num;
            std::cin >> num;
            v.push_back(num);
        }
        std::sort(v.begin(), v.end());
        std::cout << v[7] << '\n';
    }
    return 0;
}