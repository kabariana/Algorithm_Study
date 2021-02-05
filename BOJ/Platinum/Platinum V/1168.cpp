#include <iostream>

int tree[100001];

void update(int index, int value)
{
    while(index <= 100000)
    {
        tree[index] += value;
        index += index&(-index);
    }
}

int q(int ind)
{
    int result = 0;
    while(ind > 0)
    {
        result += tree[ind];
        ind -= ind&(-ind);
    }
    return result;
}

bool chk(int x, int start, int k, int count)
{
    if(x > start)
        return q(x) - q(start) >= k;
    return count - q(start) + q(x) >= k;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n,k;

    std::cin >> n >> k;

    for(int i = 1; i<=n; i++)
        update(i, 1);
    
    int cur = 0;
    std::cout << "<";

    while(true)
    {
        int count = q(n);
        int m = (k-1)%count + 1;
        int l, r, mid;
        
        l = 1;
        r = n;

        int nxt;
        while(l<=r)
        {
            mid = (l + r) / 2;
            int v_mid = (cur + mid - 1)%n + 1;
            if(chk(v_mid, cur, m, count))
            {
                nxt = v_mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        std::cout << nxt;
        update(nxt, -1);
        cur = nxt;
        if(count > 1)
            std::cout << ", ";
        else
            break;
    }
    std::cout << ">";
    return 0;
}