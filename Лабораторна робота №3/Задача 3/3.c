#include <stdio.h>

int main() {
    int n;

    
    printf("Введіть ціле число n (від 20 до 69): ");
    scanf("%d", &n);

 
    if (n < 20 || n > 69) {
        printf("Помилка: введене число має бути від 20 до 69.\n");
        return 1; 
    }

    
    switch (n) {
       
            break;
        case 21:
        case 31:
        case 41:
        case 51:
        case 61:
            printf("%d рік\n", n);
            break;
      
        case 22:
        case 32:
        case 42:
        case 52:
        case 62:
            printf("%d роки\n", n);
            break;
      
        case 23:
        case 24:
        case 33:
        case 34:
        case 43:
          case 44:
          case 53:
          case 54:
          case 63:
          case 64:
            printf("%d роки\n", n);
            break;
        default:
            printf("%d років\n", n);
            break;
    }

    return 0;
}
