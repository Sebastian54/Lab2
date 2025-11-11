#include <stdio.h>

main()
{
    int num1 = 2;
    int num2 = 4;
    int num3 = 6;
    printf("%d %d %d\n", num1, num2, num3);
    
    num1 = num2 * num3;
    num1 = num1 - 1;
    printf("%d %d %d\n", num1, num2, num3);

    int answer = num1 / 5;
    printf("%d\n", answer);
    return 0;
}