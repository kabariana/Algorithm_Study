#include <bits/stdc++.h>
#define SIZE 101

struct SHARK{
    int x, y, s, z, direction, death;
}arr[SIZE * SIZE];

int map[SIZE][SIZE];
int dx[] = {0, 0, 0, 1, -1};
int dy[] = {0, -1, 1, 0, 0};
int R, C, M, res;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> R >> C >> M;

    for(int i = 1; i<=M; i++)
    {
        std::cin >> arr[i].y >> arr[i].x >> arr[i].s >> arr[i].direction >> arr[i].z;
        arr[i].y--;
        arr[i].x--;
        map[arr[i].y][arr[i].x] = i;
    }

    for(int i = 0; i<C; i++)
    {
        for(int j = 0; j < R; j++)
        {
            if(map[j][i])
            {
                arr[map[j][i]].death = 1;
                res += arr[map[j][i]].z;
                map[j][i] = 0; // 상어가 잡힘
                break;
            }
        }
        int tmp[SIZE][SIZE] = {0,};
        for(int j = 1; j<= M; j++)
        {
            if(arr[j].death)
                continue;
            int ix = arr[j].x, iy = arr[j].y, s = arr[j].s, dir = arr[j].direction;
            int nextX, nextY;
            while(true)
            {
                nextX = ix + s*dx[dir];
                nextY = iy + s*dy[dir];
                if(nextX < C && nextY < R && nextX >= 0 && nextY >= 0)
                    break;
                if(dir == 1 && nextY < 0)
                {
                    s -= iy;
                    iy = 0;
                    dir = 2;
                }
                else if(dir == 2 && nextY >= R)
                {
                    s -= R-1-iy;
                    iy = R-1;
                    dir = 1;
                }
                else if(dir == 3 && nextX >= C)
                {
                    s -= C-1-ix;
                    ix = C-1;
                    dir = 4;
                }
                else if(dir == 4 && nextX < 0)
                {
                    s -= ix;
                    ix = 0;
                    dir = 3;
                }
            }
            if(tmp[nextY][nextX])
            {
                if(arr[tmp[nextY][nextX]].z < arr[j].z)
                {
                    arr[tmp[nextY][nextX]].death = 1;
                    tmp[nextY][nextX] = j;
                }
                else
                    arr[j].death = 1;
            }
            else
                tmp[nextY][nextX] = j;
            arr[j].x = nextX;
            arr[j].y = nextY;
            arr[j].direction = dir;
        }
        for(int p = 0; p<R; p++)
            for(int q = 0; q < C; q++)
                map[p][q] = tmp[p][q];
    }
    std::cout << res <<'\n';
    return 0;
}