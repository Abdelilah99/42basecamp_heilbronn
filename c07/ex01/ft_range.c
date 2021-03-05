

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*numbers;
	int	c_array;
	int	size;

	if (min >= max)
		return (0);
	size = max - min;
	if (size < 0)
		size *= -1;
	numbers = malloc(size * sizeof(int));
	c_array = 0;
	while (min < max)
		numbers[c_array++] = min++;
	return (numbers);
}

#include <stdio.h>

int    *ft_range(int min, int max);

int main(void)
{
    int *array = ft_range(5, 10);
    int    counter = 0;
    while (counter < 6)
    {
        printf("%i, ", array[counter]);
        counter++;
    }
    printf("\n");
    printf("expected: null pointer\n");
    printf("%p\n", ft_range(5, 10));
}
