#include <bits/stdc++.h>

std::vector<std::string> v;
std::vector<std::pair<std::string, int>> v2;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, M, result;
    std::string str;
    std::cin >> N >> M;
    

    v.push_back("");
    for(int i = 1; i<= N; i++)
    {
        std::cin >> str;

        v.push_back(str);
        v2.push_back({str, i});
    }

    std::sort(v2.begin(), v2.end());

    for(int i = 1; i<= M; i++)
    {
        std::cin >> str;

        if(str[0] >= '0' && str[0] <='9')
        {
            result = std::stoi(str);
            std::cout << v[result] << '\n';
        }
        else
        {
            int low = 0, high = N - 1;
            while(low <= high)
            {
                int mid = (low + high) /2;

                if(v2[mid].first == str)
                {
                    std::cout << v2[mid].second <<'\n';
                    break;
                }
                else if(v2[mid].first < str)
                    low = mid + 1;
                else
                    high = mid -1;
            }
        }
    }
    return 0;
}