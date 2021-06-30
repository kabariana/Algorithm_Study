// 에라토스테네스의 체 + 투 포인터
#include <bits/stdc++.h>
#define SIZE 4000000

int N, tmp;
bool sieve[SIZE + 1];

std::vector<int> sum;
std::vector<int> primeNumberSum;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;
    sum.push_back(0);

    for(int i = 2; i<std::sqrt(SIZE); i++)
    {
        for(int j = 2*i; j <= SIZE; j+=i)
            sieve[j] = 1;
    }
    for(int i = 2; i<=SIZE; i++)
    {
        if(sieve[i] == 0)
        {
            tmp += i;
            sum.push_back(tmp);
        }
    }

    int result, l, r;
    result = l = r = 0;

    while(l <= r && r < sum.size())
    {   
        if(sum[r] - sum[l] > N)
            l++;
        else if(sum[r]-sum[l]<N)
            r++;
        else
        {
            result++;
            r++;
        }
    }
    std::cout << result << '\n';
    return 0;
}