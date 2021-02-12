#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    
    int T;
    std::cin >> T;

    while(T--)
    {
        int cnt = 0;
        int n, m;
        std::cin >> n >> m;
        double c_score = 0, e_score = 0;
        double c_avg, e_avg;

        double* arr = new double[n];

        for(int i = 0; i<n; i++)
        {
            std::cin >> arr[i];
            c_score+=arr[i];
        }
        for(int i = 0; i<m; i++)
        {
            int num;
            std::cin >> num;
            e_score+=num;
        }

        c_avg = c_score / n;
        e_avg = e_score / m;

        for(int i = 0; i<n; i++)
            if(arr[i] < c_avg)
                if(arr[i] > e_avg)
                    cnt++;
        
        std::cout << cnt << '\n';
        delete[] arr;
    }
    return 0;
}