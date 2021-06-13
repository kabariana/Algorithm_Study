#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    double res = 0;
    double num[10];
    for(int i = 0; i < 10; i++)
    {
        std::cin>> num[i];
        res += num[i];
    }

    double avg = res/10, sum = 0;
    for(int i = 0; i<10; i++)
        sum += (num[i]-avg)*(num[i]-avg);
    sum = std::sqrt(sum/9);
    std::cout << (sum-1.0 >= 1e-6 ? "NOT COMFY" : "COMFY");
    return 0;
}