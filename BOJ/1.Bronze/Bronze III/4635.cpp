#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int n;
        std::cin >> n;

        if(n == -1)
            break;
        
        std::vector<int> a(n);
        std::vector<int> b(n);

        for(int i = 0; i<n; i++)
            std::cin >> a[i] >> b[i];
        
        int sum = a[0]*b[0];
        for(int i = 1; i<n; i++)
            sum+=a[i]*(b[i]-b[i-1]);

        std::cout << sum << " miles\n";
    }
    return 0;
}