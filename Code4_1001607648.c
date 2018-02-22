#include <stdio.h>

void bubble_sort(int[], int);
void swap(int *, int *);                            // Added a * to the int parameters passed through this declaration

void bubble_sort(int data[], int num_elts)
{
	int i,j;
	
	for (i = 0; i < num_elts; i++)
		for (j = num_elts-1; j > i; j--)            // Switched j > 1 to j > i, because otherwise it will not sort
			if (data[j] < data[j-1])
				swap(&data[j], &data[j-1]);         // Added a & before each array parameter passed through this function
}

void swap(int *a, int *b)                           // Added a * before the a and b int parameters passed through this declaration
{
	int temp;
	
	temp = *a;                                      // Added * before a
	*a = *b;                                        // Added * before a and b
	*b = temp;                                      // Added * before b
}

int main(void)
{
	int index, data[10] = {10,3,4,8,2,5,9,7,1,6};
	
	bubble_sort(data, 10);
	
	for (index = 0; index < 10; index++)
		printf("%d ", data[index]);
		
	printf("\n");
	
	return 0;
}
