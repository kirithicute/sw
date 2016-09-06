#include <stdio.h>
int main() {
    int i = 65;
    int n= 120;
    printf(" value of i=%d k=%d before swapping", i, n);

    i = i ^ n;
    n = i ^ n;
    i = i ^ n;
    printf("value of i=%d k=%d after swapping", i, n);

    return 0;
}
