#include <stdio.h>

int add_elem(int set[], int *size, int elem) {
    for (int i = 0; i < (*size); i++) {
        if (set[i] == elem) return i;
    }
    set[(*size)++] = elem;
    return -1;
}
void print_set(const int set[], const int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", set[i]);
    }
    printf("\n");
}

int main() {
    int n;
    int set[10], size = 0;
    while (size < 10) {
        printf("배열에 추가할 원소? ");
        scanf("%d", &n);
        int index = add_elem(set, &size, n);
        if (index >= 0) {
            printf("해당 원소가 이미 [%d]에 존재합니다.\n", index);
        }
        print_set(set, size);
    }
    return 0;
}
