#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> v(n);
    int* arr = new int[n];

    for(int i = 0; i<n; i++)
        std::cin >> v[i].first >> v[i].second;
    
    for(int i = 0; i<n; i++)
    {
        int cnt = 0;
        for(int j = 0; j<n; j++)
            if(v[i].first < v[j].first && v[i].second < v[j].second)
                cnt++;
        arr[i] = cnt+1;
    }
    for(int i = 0; i<n; i++)
        std::cout << arr[i] << ' ';
    delete[] arr;
    return 0;
}