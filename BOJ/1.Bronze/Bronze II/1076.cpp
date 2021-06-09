#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string color[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
    std::string str;

    int indArr[3];

    long long result = 0;

    for(int i = 0; i<3; i++)
    {
        std::cin >> str;
        for(int j = 0; j<10; j++)
            if(color[j] == str)
                indArr[i] = j;
        result = indArr[0] * 10 + indArr[1];
        for(int i = 0; i<indArr[2]; i++)
            result*=10;
    }
    std::cout << result <<'\n';
    return 0;
}