// Manacher's Algorithm
#include <bits/stdc++.h>

const int MAX = 1000;

std::string S;
int len;

bool isPal(int index)
{
    for(int i = 0; index + i < len - i - 1; i++)
        if(S[index + i] != S[len - i - 1])
            return false;
    return true;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> S;
    len = S.size();
    int res = 0;

    for(int i = 0; i<len; i++)
    {
        if(isPal(i))
        {
            res += len + i;
            break;
        }
    }
    std::cout << res << '\n';
    return 0;
}