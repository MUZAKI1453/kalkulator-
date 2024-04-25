#include <stdio.h>

int main() {
    int number1, number2;
    float answer;
    char op;


    printf("masukkan operasi (+, -, *, /) \n");
    scanf("%c", &op);


    printf("masukkan nomor pertama: ");
    scanf(" %d", &number1);


    printf("masukkan nomor kedua: ");
    scanf(" %d", &number2);


    if (op == '+')
    {
        answer = number1 + number2;
        printf("%d + %d = %f", number1, number2, answer);
    } else if (op == '-')
    {
        answer = number1 - number2;
        printf(" %d - %d = %f", number1, number2, answer);
    } else if (op == '*')
    {
        answer = number1 * number2;
        printf(" %d * %d = %f", number1, number2, answer);
    } else if (op == '/')
    {
        if (number2 == 0)
        {
            printf("\n tdk bisa membagi dengan nol");
            scanf("%d", &number2);
        }
        answer = number1 / number2;
        printf(" %d / %d = %.2f", number1, number2, answer);
    } else {
        printf(" \n masukkan oprator yg valid ");
    }
    return 0;
}
