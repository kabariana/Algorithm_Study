#include <bits/stdc++.h>

bool compare(const int& a, const int& b)
{
    return a>b;
}

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    
    int* a = new int[n];
    int* b = new int[n];

    for(int i = 0; i < n; i++)
        std::cin >> a[i];
    for(int i = 0; i < n; i++)
        std::cin >> b[i];

    std::sort(a, a+n);
    std::sort(b, b+n, compare);

    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum += a[i]*b[i];
    }

    std::cout << sum;
    delete[] a;
    delete[] b;
    return 0;
}