#include <stdio.h>

int enqueue(int queue[], int *cnt, int *end, int n) {
    if (*cnt < 10) {
        queue[(*end)++] = n;
        *end %= 10;
        (*cnt)++;
        return 0;
    } else {
        printf("queue is full\n");
        return 1;
    }
}

int dequeue(int queue[], int *cnt, int *front, int *n) {
    printf("dequeue cnt : %d\n", *cnt);
    if (*cnt > 0) {
        *n = queue[(*front)++];
        *front %= 10;
        (*cnt)--;
        return 0;
    } else {
        printf("queue is empty\n");
        return 1;
    }
}

int is_full(int cnt) {
    return (cnt == 10)? 1 : 0;
}

int is_empty(int cnt) {
    return (cnt == 0)? 1 : 0;
}

int print_set(int set[], int front, int end) {
    if (front < end) {
        for (int i = front; i < end; i++) {
            printf("| %d ", set[i]);
        }
        printf("|\n");
    } else {
        for (int i = front; i < 10; i++) {
            printf("| %d ", set[i]);
        }
        for (int i = 0; i < end; i++) {
            printf("| %d ", set[i]);
        }
        printf("|\n");
    }
}
int main() {
    int choice;
    int queue[10];
    int cnt = 0;
    int front = 0, end = 0;
    while (1) {
        printf("1. enqueue, 2.dequeue, 3. print\n");
        printf("select operation : ");
        scanf("%d", &choice);
        if (choice == 1) {
            int n;
            printf("enter a number: ");
            scanf("%d", &n);
            if (!enqueue(queue, &cnt, &end, n))
                printf("front is %d, end is %d, n is %d\n", front, end, n);
        } else if (choice == 2) {
            int n;
            if (!dequeue(queue, &cnt, &front, &n))
                printf("front is %d, end is %d, n is %d\n", front, end, n);
        } else if (choice == 3) {
            print_set(queue, front, end);
        } else {
            break;
        }
    }
    return 0;
}
