/* Kimberly Duffy 1001607648 */

#include <stdio.h>

#define YES 1
#define NO  0 

int main (void)
{
	int Decision;

	printf("Enter 1 for YES and 0 for NO\n\n");
	
	printf("Do you want a burger? ");
	scanf("%d", &Decision);
	
	if (Decision == YES)
	{
		printf("\n\nDo you want fries with that? ");
        scanf("%d", &Decision);

        if (Decision == YES)
	    {
            printf("\nBig Mac with Fries\n\n");
        }
        else if (Decision == NO)
        {
            printf("\nMcDouble\n\n");
        }
	}
	else if (Decision == NO)
	{
		printf("\n\nDo you want a chicken sandwich? ");
		scanf("%d", &Decision);
		
		if (Decision == NO)
		{
			printf("\n\nDo you want a salad? ");
			scanf("%d", &Decision);
			
			if (Decision == YES)
			{
				printf("\nSouthwest Grilled Chicken Salad\n\n");
			}
			else if (Decision == NO)
			{
				printf("\nIce Cream Cone\n\n");
			}
		}
		else if (Decision == YES)
		{
			printf("\nClassic Chicken Sandwich\n\n");
		}
	}
	else
	{
		printf("%d is not a valid input.\n\n", Decision);
	}
	
	return 0;
}
