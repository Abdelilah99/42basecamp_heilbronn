

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	counter;
	int	size;

	if (!(range))
		return (-1);
	if (max < min)
	{
		*range = malloc(0);
		return (0);
	}
	size = max - min;
	if (size < 0)
		size *= (-1);
	*range = malloc(sizeof(int) * (size));
	counter = 0;
	while (min < max)
	{
		(*range)[counter] = min;
		min++;
		counter++;
	}
	counter = 0;
	while (counter < size)
		counter++;
	return (size);
}

#include <stdio.h>
#include <stdlib.h>
int    ft_ultimate_range(int **range, int min, int max);

int    main(void)
{
    int **range;
    int **null_range = NULL;
    int    counter;
    int min = 10;
    int max = 50;

    range = malloc(sizeof(int*));
    printf("size: %i\n", ft_ultimate_range(range, min, max));
    counter = 0;
    while (counter < (max - min))
    {
        printf("array: %d\n", (*range)[counter]);
        counter++;
    }
    printf("\n");
    printf("expected: -1\n");
    printf("size: %i\n", ft_ultimate_range(null_range, min, max));
}
