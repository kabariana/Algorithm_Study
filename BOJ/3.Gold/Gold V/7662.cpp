#include <bits/stdc++.h>

bool visited[1000001];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int tc;
    std::cin >> tc;

    while(tc--)
    {
        int n;
        std::cin >> n;

        std::priority_queue<std::pair<int, int>> maxHeap;
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> minHeap;

        for(int i = 0; i<n; i++)
        {
            char ch;
            int num;
            std::cin >> ch >> num;

            if(ch == 'I')
            {
                maxHeap.push({num, i});
                minHeap.push({num, i});
                visited[i] = true;
            }
            else // ch == 'D'
            {
                if(num == 1)
                {
                    while(!maxHeap.empty() && !visited[maxHeap.top().second])
                        maxHeap.pop();
                    if(!maxHeap.empty())
                    {
                        visited[maxHeap.top().second] = false;
                        maxHeap.pop();
                    }
                }
                else
                {
                    while(!minHeap.empty() && !visited[minHeap.top().second])
                        minHeap.pop();
                    if(!minHeap.empty())
                    {
                        visited[minHeap.top().second] = false;
                        minHeap.pop();
                    }    
                }
            }
        }
        while(!maxHeap.empty() && !visited[maxHeap.top().second])
            maxHeap.pop();
        while(!minHeap.empty() && !visited[minHeap.top().second])
            minHeap.pop();

        if(minHeap.empty() && maxHeap.empty())
            std::cout << "EMPTY\n";
        else
            std::cout << maxHeap.top().first << ' ' << minHeap.top().first << '\n';
    }
    return 0;
}