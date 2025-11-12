#include <stdio.h>

int main()
{
    int number;
    printf("Multiplication Table Generator\n");
    printf("******************************\n");
    printf("Enter a number:> ");
    if (scanf("%d", &number) != 1) return 1;

    printf("\nx%d Multiplication Table\n", number);
    for (int i = 1; i <= 12; ++i) {
        printf("%d x %d = %d\n", i, number, i * number);
    }

    return 0;
}