#include <stdio.h>

void print_array(int* arr, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

// 이차 조사법
void quadratic_probing(int* hash_table, int table_size, int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		int hash_value = arr[i] % table_size;

		// 충돌이 일어나지 않으면 해시 값 대입
		if (hash_table[hash_value] == -1)
			hash_table[hash_value] = arr[i];
		else
		{
			for (int j = 0; j < table_size; j++)
			{
				int new_hash_value = (hash_value + j * j) % table_size;
				if (hash_table[new_hash_value] == -1)
				{
					hash_table[new_hash_value] = arr[i];
					break;
				}
			}
		}
	}
	print_array(hash_table, n);
}

int main()
{
	int arr[7] = { 680, 48, 87, 71, 104, 74, 94 };
	int n = 7;

	int hash_table_size = 7;
	int hash_table[7];

	for (int i = 0; i < hash_table_size; i++)
		hash_table[i] = -1;

	quadratic_probing(hash_table, hash_table_size, arr, n);
	return 0;
}
