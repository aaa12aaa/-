#include <stdio.h>
#include <math.h>

int main() {
    double r, h, S, V;

    // Вхідні дані
     printf("Введіть радіус: ");
    scanf("%lf", &r); 
    
     printf("Введіть висоту циліндра: ");
    scanf("%lf", &h);

    // Обчислення площі бічної поверхні та об'єму циліндра
    S = 2 * M_PI * r * h;
    V = M_PI * pow(r, 2) * h;

    // Виведення результатів
    printf("Площа бічної поверхні: %.2lf\n", S);
    printf("Об'єм: %.2lf\n", V);

    return 0;
}
