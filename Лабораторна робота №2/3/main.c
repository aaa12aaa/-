#include <stdio.h>
#include <math.h>

int main() {
    int x, z;
    double y;

    printf("Введіть значення x: ");
    scanf("%d", &x);
    printf("Введіть значення z: ");
    scanf("%d", &z);
// Перевірка чи знаменник не дорівнює нулю
    if(sqrt(x) - 2*sqrt(z) != 0) {
        y = (sqrt(x) + 2*sqrt(x*z)) / (sqrt(x) - 2*sqrt(x*z));
        printf("\nРезультат: %.3f\n", y);
    } else {
        printf("Ділення на нуль неможливе.\n");
    }

    return 0;
}
