// 이분탐색 문제
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        int n;
        std::cin >> n;
        std::vector<int> v(n);

        for(int i = 0; i<n; i++)
            std::cin >> v[i];
        
        std::sort(v.begin(),v.end());

        int m;
        std::cin >> m;

        for(int i = 0; i<m; i++)
        {
            int num;
            std::cin >> num;

            int l = 0, h = n-1;
            bool chk = false;
            while(l <= h)
            {
                int mid = (l+h)/2;
                if(v[mid] == num)
                {
                    chk = true;
                    break;
                }
                else if(v[mid] < num)
                    l = mid + 1;
                else
                    h = mid - 1;
            }
            if(chk)
                std::cout << "1\n";
            else
                std::cout << "0\n";
        }
    }
    return 0;
}