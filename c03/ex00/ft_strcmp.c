

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0'))
			&& (s1[i] == s2[i]))
	{
		i++;
	}
	diff = (int)s1[i] - (int)s2[i];
	return (diff);
}

int main(void)
{
	char s1[]="a";
	char s2[]="";

	ft_strcmp(s1,s2);
	printf ("this is the difference in ASCI ? %i \n ", ft_strcmp(s1,s2));

}
