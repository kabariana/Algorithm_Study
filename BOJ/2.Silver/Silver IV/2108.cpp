#include <bits/stdc++.h>

int data[500001];
int cnt[8001];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, sum = 0;
    std::cin >> n;

    for(int i = 0; i<n; i++)
    {
        std::cin >> data[i];
        sum += data[i];
        cnt[data[i]+4000]++;
    }

    std::sort(data, data + n);

    int index = 0;
    int max = 0;

    for(int i = 0; i<8001; i++)
    {
        if(cnt[i] > max)
        {
            max = cnt[i];
            index = i;
        }
    }

    for(int i = index + 1; i< 8001; i++)
    {
        if(cnt[i] == max)
        {
            index = i;
            break;
        }
    }

    int a, b, c, d;
    a = std::round(double(sum)/n);
    b = data[(n-1)/2];
    c = index - 4000;
    d = data[n-1] - data[0];

    std::cout << a << '\n' << b << '\n' << c << '\n' << d << '\n';
    return 0;
    
}