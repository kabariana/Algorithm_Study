#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int A, B;
    std::cin >> A >> B;
    std::string str = "abcdefgjklqwert";

    for(int i = 0; i<B; i++)
    {
        std::cout << str << ' ';
        std::next_permutation(str.begin(), str.end());
    }
    return 0;
}