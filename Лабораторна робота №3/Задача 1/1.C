#include <stdio.h>
#include <math.h>

int main() {
    int b, c;
    double a;

    printf("Введіть значення b (1,2,3): ");
    scanf("%d", &b);

    if (b != 1 && b != 2 && b != 3) {
        printf("Неправильне значення b. Потрібно ввести 1, 2 або 3.\n");
        return 1; // Повертаємо 1, щоб показати, що програма закінчилася з помилкою.
    }

    printf("Введіть значення c: ");
    scanf("%d", &c);

    if (c < 1 || c > 3, c==b) {
        printf("\nНеправильне значення c.\nПотрібно ввести значення від 1 до 3, або щоб число відрізнялось від b\n");
        return 1; // Повертаємо 1, щоб показати, що програма закінчилася з помилкою.
    }
  

  if (b == 1) {
    a = (4 * b - 9 * c) / (pow(b, 2) - pow(c, 2));
     printf("Коли a = 1, b = %.2f\n", a);
  }
  if (b == 2) {
     a = sqrt(2 - b * c) / (b / pow(c, 2)); 
    printf("За формулою a = sqrt(2 - bc) / (b/c^2), при b = %.2f та c = %.2f, a = %.2f\n");
  }
  if (b == 3) {
    a = b / (c * c);
    printf("За формулою a = b / c^2, при b = %.2f та c = %.2f, a = %.2f\n");
  }


  if (c == 1) {
    a = (4 * b - 9 * c) / (pow(b, 2) - pow(c, 2));
    printf("Коли c = 1, a = %.2f\n", a);
    }
  if (c == 2) {
    a = sqrt(2 - b * c) / (b / pow(c, 2));
    printf("Коли c = 2, a = %.2f\n", a);
    }
   if (c == 3) {
     a = b / pow(c, 2);
     printf("Коли c = 3, a = %.2f\n", a);
    }

    printf("\na = %.2f\n", a);

    return 0;
}
