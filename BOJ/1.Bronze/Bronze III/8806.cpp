#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    while(n--)
    {
        double s_a = 0, s_b = 0;
        std::vector<double> a(3), b(3);
        for(int i = 0; i<3; i++)
            std::cin >> a[i];
        for(int i = 0; i<3; i++)
            std::cin >> b[i];
        for(int i = 0; i<3; i++)
        {
            s_a+=a[i]*b[(i+1)%3];
            s_b+=a[i]*b[(i+2)%3];
        }
        if(s_a == s_b)
            std::cout << "=\n";
        else if(s_a<s_b)
            std::cout << "GOSIA\n";
        else 
            std::cout << "ADAM\n";
    }
    return 0;
}