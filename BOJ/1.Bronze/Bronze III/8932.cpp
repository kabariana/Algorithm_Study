#include <bits/stdc++.h>

double a[7] = {9.23076, 1.84523, 56.0211, 4.99087, 0.188807, 15.9803, 0.11193};
double b[7] = {26.7, 75, 1.5, 42.5, 210, 3.8, 254};
double c[7] = {1.835, 1.348, 1.05, 1.81, 1.41, 1.04, 1.88};

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        int sum = 0;
        std::vector<double> v(7);
        for(int i = 0; i<7; i++)
        {
            std::cin >> v[i];
            if(i%3==0)
                sum+=a[i]*std::pow(b[i]-v[i], c[i]);
            else
                sum+=a[i]*std::pow(v[i]-b[i], c[i]);
        }
        std::cout << sum << '\n';
    }
    return 0;
}