#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Birinci ededi daxil et:");
    scanf("%d", &a);
    printf("İkinci ededi daxil et:");
    scanf("%d", &b);
    if (a>b) {
        printf("En boyuk eded: %d\n", a);
    }
    else if (b>a) {
            printf("En boyuk eded: %d\n", b);
        }
    else {
        printf("Ededler beraberdir\n");
    }
    return 0;

}
