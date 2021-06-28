// LIS 문제
#include <bits/stdc++.h>

const int MAX = 1e6 + 1;

int N, tmp;
int arr[MAX], dp[MAX];
std::vector<int> v, res;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;

    for(int i = 1; i <= N; i++)
        std::cin >> arr[i];
    
    v.push_back(arr[1]);

    for(int i = 2; i<= N; i++)
    {
        if(v[tmp] < arr[i])
        {
            v.push_back(arr[i]);
            tmp++;
            dp[i] = tmp;
        }
        else
        {
            int loc = std::lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
            v[loc] = arr[i];
            dp[i] = loc;
        }
    }

    int szLIS = tmp;

    for(int i = N; i>= 0; i--)
    {
        if(dp[i] == szLIS)
        {
            res.push_back(arr[i]);
            szLIS--;
        }
    }

    int sz = res.size();
    std::cout << sz <<'\n';
    for(int i = 0; i < sz; i++)
    {
        std::cout << res.back() << ' ';
        res.pop_back();
    }
    return 0;
}