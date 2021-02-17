// 퀵정렬 x, --> 최악의 경우 O(n^2)
// 합병정렬 --> 최악의 경우에도 O(nlogn)
#include <bits/stdc++.h>

void merge(int* arr, int* sorted, int s, int m, int e)
{
    int index = s;
    int i = s;
    int j = m + 1;

    while(i<=m && j<=e)
    {
        if(arr[i] < arr[j])
            sorted[index] = arr[i++];
        else
            sorted[index] = arr[j++];

        index++;
    }

    if(i > m)
    {
        while(j<=e)
        {
            sorted[index++] = arr[j++];
        }
    }
    if(j > e)
    {
        while(i <= m)
        {
            sorted[index++] = arr[i++];
        }
    }
    
    for(int k = s; k<=e; k++)
        arr[k] = sorted[k];
}

void mergeSort(int* arr, int* sorted, int s, int e)
{
    int m;
    if(s<e)
    {
        m = (s+e)/2;
        mergeSort(arr, sorted, s, m);
        mergeSort(arr, sorted, m+1, e);
        merge(arr, sorted, s, m, e);
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    int* arr = new int[n];
    for(int i = 0; i<n; i++)
        std::cin >> arr[i];

    int* sorted = new int[n];
    mergeSort(arr, sorted, 0, n-1);

    for(int i = 0; i<n; i++)
        std::cout << arr[i] << '\n';

    delete[] arr;
    delete[] sorted;
    return 0;
}