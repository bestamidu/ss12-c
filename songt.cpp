#include <stdio.h>
#include <math.h>

int nt(int nto) {
    if (nto < 2) {
        return 0;
    }
    for (int i = 2; i <= nto/2; i++) {
        if (nto % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int number;
    printf("Nhap number: ");
    scanf("%d", &number);

    if (nt(number)) {
        printf("%d la so nguyen to.\n", number);
    } else {
        printf("%d khong phai la so nguyen to.\n", number);
    }

    return 0;
}
