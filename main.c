#include <stdio.h>
#include "cs50.h"

int main(void)
{
    float ugugdul1 = get_float("ehnii toog oruulna uu: ");

    char temdegt = get_char("temdegt oruulna uu (+, -, *, /): ");

    float ugugdul2 = get_float("daraagin toog oruulna uu: ");

    float result;

    switch (temdegt)
    {
        case '+':
            result = ugugdul1 + ugugdul2;
            break;
        case '-':
            result = ugugdul1 - ugugdul2;
            break;
        case '*':
            result = ugugdul1 * ugugdul2;
            break;
        case '/':
            if (ugugdul2 != 0)
            {
                result = ugugdul1 / ugugdul2;
            }
            else
            {
                printf("sorry u cant devide by 0.\n");
                return 1; 
            }
            break;
        default:
            printf("sorry this number cant.\n");
            return 1; 
    }

    printf("result: %.2f\n", result);

    return 0;
}