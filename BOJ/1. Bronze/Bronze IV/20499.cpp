#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int k, d, a;
    scanf("%d/%d/%d", &k, &d, &a);

    if((k+a)<d || d == 0)
        std::cout << "hasu";
    else
        std::cout << "gosu";
    return 0;
}