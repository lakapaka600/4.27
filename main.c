#include <stdio.h>

int main(void) {
    int num;
    printf("inserisci il numero: ");
    scanf("%d", &num);
    int i;
    for(i=1;i<=num;i++) {
        if(num%i==0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
