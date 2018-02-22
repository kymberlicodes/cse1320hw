/* Kimberly Duffy 1001607648 */

#include <stdio.h>
#include <stdbool.h>

void ConvertDecimalToBinary(int Decimal)
{
    int x, _128, _64, _32, _16, _8, _4, _2, _1;
    
    x = Decimal;
    _1 = x%2;
    x = x/2;
    _2 = x%2;
    x = x/2;
    _4 = x%2;
    x = x/2;
    _8 = x%2;
    x = x/2;
    _16 = x%2;
    x = x/2;
    _32 = x%2;
    x = x/2;
    _64 = x%2;
    x = x/2;
    _128 = x%2;

    printf("%d%d%d%d%d%d%d%d.\n\n", _128, _64, _32, _16, _8, _4, _2, _1);
}

int main(void)
{
    bool InvalidInput = true;
    int Input;

    while(InvalidInput) {

        printf("\nPlease enter a decimal number between 0 and 255: ");
        scanf("%d", &Input);

        if (Input >= 0 && Input <= 255) {
            printf("Decimal %d converts to binary ", Input);
            InvalidInput = false;
        } else {
            printf("You entered a number that is not between 0 and 255.\n");
            InvalidInput = true;
        }
    }

    ConvertDecimalToBinary(Input);
		
	return 0;
}
