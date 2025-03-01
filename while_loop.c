#include <stdio.h>

int main() {
    int i = 1;
    while(i <= 10) {
        printf("value of i is = %d\n", i);
        i = i + 1;
    }

    int num = 0;
    do {
        printf("value of num is %d\n", num);
        num++;
    }while(num < 5);

    return 0;
}