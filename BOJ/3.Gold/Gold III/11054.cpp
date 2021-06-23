#include <bits/stdc++.h>
#define MAX 1000

int v[MAX + 1];
int v_increase[MAX + 1];
int v_decrease[MAX + 1];
int res[MAX + 1];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, max;
    std::cin >> N;

    for(int i = 0; i < N; i++)
    {
        std::cin >> v[i];
        max = 0;
        for(int j = 0; j < i; j++)
            if(v[i]>v[j]&&v_increase[j]>max)
                max = v_increase[j];
        v_increase[i] = max + 1;
        res[i]+=v_increase[i];
    }
    for(int i = N-1; i>=0; i--)
    {
       max = 0;
       for(int j = N-1; j>i; j--)
           if(v[i] > v[j] && v_decrease[j] > max)
               max = v_decrease[j];
        v_decrease[i] = max + 1;
        res[i] += v_decrease[i];
    }

    std::sort(res, res + N, std::greater<int>());
    std::cout  << res[0] -1 <<'\n';
    return 0;
}