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
        printf("재고 초과\n");
        return;
    }
    item new_item;
    printf("품목 : ");
    scanf(" %[^\n]s", new_item.name);
    printf("수량 : ");
    scanf(" %d", &new_item.count);
    printf("단가 : ");
    scanf(" %d", &new_item.price);
    items[count++] = new_item;
}

void find_item(item* items) {
    item item_found;
    char key[50];
    printf("품목 : ");
    scanf(" %[^\n]s", key);
    for (int i = 0; i < count; i++) {
        if (strstr(items[i].name, key)) {
            printf("품목 : %s\n", items[i].name);
            printf("수량 : %d\n", items[i].count);
            printf("단가 : %d\n", items[i].price);
            return;
        }
    }
    printf("ERR_NOT_FOUND"); // 매크로가 어딨는지 모르겠군요.
}

void print_items(item* items) {
    printf("품목\t수량\t가격\n");
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
        printf("기능을 선택하세요 (0. 종료, 1. 추가, 2 검색, 3.출력)");
        int choice = -1;
        while (choice < 0 || choice > 3) scanf(" %d", &choice);

        if (choice == 0) break;
        else {
            funcs[choice - 1](items);
        }
    }
    return 0;
}
