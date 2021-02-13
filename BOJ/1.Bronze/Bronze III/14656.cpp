#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int* a = new int[n];
    int* b = new int[n];

    for(int i = 0; i<n; i++)
    {
        int num;
        std::cin >> num;
        a[i] = b[i] = num;
    }

    std::sort(a, a+n);

    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i] != b[i])
            cnt++;
    }

    std::cout << cnt;

    delete[] a;
    delete[] b;
    return 0;
}