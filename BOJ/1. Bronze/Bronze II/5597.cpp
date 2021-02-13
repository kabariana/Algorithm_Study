#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
   int arr[30] = {0,}; 
   for(int i = 0; i<28; i++)
   {
       int temp;
       std::cin >> temp;
       arr[temp-1]++;
   }

   for(int i = 0; i<30; i++)
   {
        if(arr[i]!=1)
            std::cout << i + 1 << '\n';
   }
   return 0;
}