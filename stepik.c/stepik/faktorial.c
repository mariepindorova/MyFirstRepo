#include <stdio.h>
int main(void) {
    int a, fakt=1;
    scanf("%d", &a);
    if (a==0 || a==1) {
        printf("1");
    } else {
        for (int i=1; i<=a; i++) {
            fakt=fakt*i;
        }
        printf("%d", fakt);
    }
    return 0;
}

