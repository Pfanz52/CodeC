#include<stdio.h>
#include<string.h>
int main()
{
    printf("==========================\n");
    printf("VTC Academy Bank\n");
    printf("==========================\n");
    printf("ATM Machine\n");
    printf("__________________________\n");
    printf("1. Checking account balance\n2. Withdrawal\n3. Transfer\n4. Change PIN\n5. End of transaction\n");
    printf("--------------------------\n");
    int n; 
    printf("Lua chon cua ban: ");
    scanf("%d",&n);
    printf("Your choice: %d",n);
    
    return 0;
}