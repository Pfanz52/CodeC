#include<stdio.h>
int main(){
    int choice;
    printf("MENU\n");
    printf("===================\n");
    printf("1. CF\n");
    printf("2. C\n");
    printf("3. HDJ\n");
    printf("4. DreamWeaver");
    printf("5. RDBMS\n");
    printf("6. Learn Java By Example\n");
    printf("chon menu (1-6):");
    scanf("%d", &choice);
     switch (choice) {
        case 1:
            printf("1. CF\n");
            break;
        case 2:
            printf("2. C\n");
            break;
        case 3:
            printf("3. HDJ\n");
            break;
        case 4:
            printf("4. DreamWeaver\n");
            break;
        case 5:
            printf("5. RDBMS\n");
            break;
        case 6:
            printf("6. Learn Java By Example\n");
            break;
        default:
            printf("Chon sai\n");
            break;
        }
        return 0;
}