#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int p1, s1, s2, p2;
    std::string result;

    std::cin >> p1 >> s1;
    std::cin >> s2 >> p2;

    int p = p1 + p2;
    int s = s1 + s2;

    if(p == s)
    {
        if(p1 > s2)
            result = "Esteghlal";
        else if(p1 < s2)
            result = "Persepolis";
        else
            result = "Penalty";
    }
    else if(p > s)
        result = "Persepolis";
    else
        result = "Esteghlal";

    std::cout << result;
    return 0;
}