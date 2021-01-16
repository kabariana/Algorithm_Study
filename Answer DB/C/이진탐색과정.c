#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Enter fputc('\n', stdout) 

void PrintSolution(const int* Arr, int Size, int First, int Last) {
	int Mid = (First + Last) / 2;

	printf("━━━━┳");
	for (int i = 0; i < Size; i++)
		printf("━━━━"); Enter;

	printf(" %2d ┃", Arr[Mid]);
	for (int i = 0; i < Size; i++)
		printf("%4d", Arr[i]); Enter;

	printf("━━━━┻");
	for (int i = 0; i < Size; i++)
		printf("━━━━"); Enter;

	printf("     ");
	for (int i = 0; i <= Last; i++) {
		if (i == First) printf("   F");
		else if (i == Mid) printf("   M");
		else if (i == Last) printf("   L");
		else printf("    ");
	} Enter;
}

void Sort(int Arr[], int Size) {
	for (int i = 1; i < Size; ++i) {
		for (int j = i - 1; j >= 0; --j) {
			if (Arr[j] > Arr[j + 1]) {
				int temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = temp;
			}
		}
	}
}

int BinarySearch(const int* Arr, int Size, int Target)
{
	int First = 0, Last = Size - 1;
	int Mid = (First + Last) / 2;

	do {
		PrintSolution(Arr, Size, First, Last);
		if (Arr[Mid] == Target) {
			printf("\n\n%d는(은) Arr[%d]에 있습니다.\n", Target, Mid);
			return Mid;
		}
		else {
			if (Arr[Mid] < Target) First = Mid;
			else Last = Mid;
			Mid = (First + Last) / 2;
		}
	} while (First < Last);

	printf("\n\n%d을 찾지 못했습니다.\n", Target);
	return -1;
}

int main()
{
	int Size, Target;

	printf("Binary Search.요소 개수 >> ");
	scanf_s("%d", &Size);

	int* Arr = (int*)malloc(sizeof(int) * Size);
	if (Arr == NULL) return -1;

	printf("Binary Search.요소[%d] >> ", Size);
	for (int i = 0; i < Size; ++i)
		scanf_s("%d", Arr + i);
	Sort(Arr, Size);

	printf("Binary Search.검색 값 >> ");
	scanf_s("%d", &Target);

	BinarySearch(Arr, Size, Target);

	free(Arr);
	return 0;
}
