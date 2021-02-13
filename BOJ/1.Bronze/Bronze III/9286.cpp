// C형식 출력 또는 fast output 쓸 것
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int num;
        std::cin >> num;

        std::cout << "Case " << i << ":\n";
        for (int j = 0; j < num; j++)
        {
            int grade;
            std::cin >> grade;

            if (grade < 6)
                std::cout << grade + 1 << '\n';
        }
    }
    return 0;
}