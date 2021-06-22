#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    char str1[1001], str2[1001];

    std::cin >> str1 >> str2;
    int length1 = strlen(str1);
    int length2 = strlen(str2);

    std::vector<std::vector<int>> v(length1 + 1, std::vector<int>(length2 + 1, 0));
    int result = 0;

    for(int i = 1; i<= length1; i++)
    {
        for(int j = 1; j<=length2; j++)
        {
            if(str1[i-1] == str2[j-1])
                v[i][j] = v[i-1][j-1] + 1;
            else
                v[i][j] = std::max(v[i-1][j], v[i][j-1]);
        }
    }

    std::cout << v[length1][length2];
    return 0;
}