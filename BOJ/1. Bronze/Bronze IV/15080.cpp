#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int h1, m1, s1, h2, m2, s2, result = 0;
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    result += (h2 - h1) * 3600;
    result += (m2 - m1) * 60;
    result += (s2 - s1);
    if(result < 0)
        result += 24 * 3600;
    std::cout << result;
    return 0;
}