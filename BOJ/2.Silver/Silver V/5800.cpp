#include <bits/stdc++.h>

bool compare(const int& a, const int& b)
{
    return a > b;
}

int main(int argc, char* argv[])
{
    int K;
    std::cin >> K;

    for(int l = 0; l<K; l++)
    {

        std::cout << "Class " << l+1 << '\n';
        int n;
        std::cin >> n;
        std::vector<int> v;

        for(int i = 0; i<n; i++)
        {
            int temp;
            std::cin >> temp;
            v.push_back(temp);
        }

        std::sort(v.begin(), v.end(), compare);

        int gap = v[0] - v[1];

        for(int i = 0; i < n - 1; i++)
            if(gap < v[i] - v[i+1])
                gap = v[i] - v[i+1];

        std::cout << "Max " << v[0] << ", Min " << v[n-1] << ", Largest gap " << gap << '\n';
    }    
    return 0;
}