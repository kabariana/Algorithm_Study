/*---------------------------------------------------------------------------------------------------------------------
 * 2020.12.23
 * 질문 제목 : C언어 도서관리 프로그램
 * 도서 총 수 n을 입력하고 이 n의 개수만큼 책의 이름과 저자의 이름을 각각 입력한다.
 * 다시 어떤 작가의 이름을 입력하면, n개의 책 중에서 그 작가는 총 몇 권의 책을 
 * 썼는지 표시되는 도서관리 프로그램을 짜도록 하라.
 *---------------------------------------------------------------------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct book {
	char name_of_book[100];
	char author[25];
}Book;

int main()
{
	int num, cnt = 0;
	char author[25];

	printf("Input the number of books:\n");
	scanf("%d", &num);

	Book* b = (Book*)malloc(num * sizeof(Book));

	for (int i = 0; i < num; i++)
	{
		scanf("%s %s", b[i].name_of_book, b[i].author);
	}

	printf("Enter the name of the author:\n");
	scanf("%s", author);

	for (int i = 0; i < num; i++)
	{
		if (!strcmp(author, b[i].author))
			cnt++;
	}
	printf("%s:%d\n", author, cnt);

	free(b);

	return 0;
}
