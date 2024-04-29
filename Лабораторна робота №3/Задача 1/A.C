#include <stdio.h>
#include <math.h>

int main() {
    int b, c;
    double a;

    printf("Введіть значення b (1,2,3): ");
    scanf("%d", &b);

    printf("Введіть значення c: ");
    scanf("%d", &c);

   if (b != 1 && b != 2 && b != 3) {
       printf("Неправильне значення b. Потрібно ввести 1, 2 або 3.\n");
       return 1; // Повертаємо 1, щоб показати, що програма закінчилася з помилкою.
   }
  if (b == 1) {
        a = 4 * b - 9 * c;
        printf("Коли b = 1, a = %.2f\n", a);
    }
 
  if (b == 2) {
      if (c <= 2) {
          a = sqrt(2 - b * c);
          printf("При b = 2 та c = %d, a = %.2f\n", c, a);
      } else {
          printf("Для b = 2, c повинно бути менше або рівне 2.\n");
          return 1;
      }
  }
  
    if (b == 3 && c == 0) {
        printf("Для b = 3, c не може бути 0.\n");
        return 1;
    }

    if (b == 3) {
        a = b / pow(c, 2);
        printf("При b = 3 та c = %d, a = %.2f\n", c, a);
    }

    printf("\na = %.2f\n", a);

    return 0;
}
