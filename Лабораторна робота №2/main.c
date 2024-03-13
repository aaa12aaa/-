#include <stdio.h>

int main() {
    double num1, num2;

    // Запит вхідних даних
    printf("Введіть перше дійсне число: ");
    scanf("%lf", &num1);
    printf("Введіть друге дійсне число: ");
    scanf("%lf", &num2);


  
    // Обчислення та виведення результатів
    printf("\nДобуток двох чисел: %.2f\n", num1 * num2);
    printf("Подвоєна сума двох чисел: %.2f\n", 2 * (num1 + num2));
    printf("Середнє арифметичне двох чисел: %.2f\n", (num1 + num2) / 2);

    return 0;
}
