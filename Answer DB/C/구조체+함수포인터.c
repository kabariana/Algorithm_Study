#include <stdio.h>
#include <string.h>
typedef struct {
    char name[50];
    int count;
    int price;
} item;

int count = 0;
void add_item(item* items) {
    if (count == 5) {
        printf("��� �ʰ�\n");
        return;
    }
    item new_item;
    printf("ǰ�� : ");
    scanf(" %[^\n]s", new_item.name);
    printf("���� : ");
    scanf(" %d", &new_item.count);
    printf("�ܰ� : ");
    scanf(" %d", &new_item.price);
    items[count++] = new_item;
}

void find_item(item* items) {
    item item_found;
    char key[50];
    printf("ǰ�� : ");
    scanf(" %[^\n]s", key);
    for (int i = 0; i < count; i++) {
        if (strstr(items[i].name, key)) {
            printf("ǰ�� : %s\n", items[i].name);
            printf("���� : %d\n", items[i].count);
            printf("�ܰ� : %d\n", items[i].price);
            return;
        }
    }
    printf("ERR_NOT_FOUND"); // ��ũ�ΰ� ������� �𸣰ڱ���.
}

void print_items(item* items) {
    printf("ǰ��\t����\t����\n");
    for (int i = 0; i < count; i++) {
        printf("%s\t", items[i].name);
        printf("%d\t", items[i].count);
        printf("%d\n", items[i].price);
    }
}

typedef void (*menu_handler)(item*);

int main(){
    item items[5];
    menu_handler funcs[3] = {add_item, find_item, print_items};
    
    while (1) {
        printf("����� �����ϼ��� (0. ����, 1. �߰�, 2 �˻�, 3.���)");
        int choice = -1;
        while (choice < 0 || choice > 3) scanf(" %d", &choice);

        if (choice == 0) break;
        else {
            funcs[choice - 1](items);
        }
    }
    return 0;
}
