

#include <stdio.h>
int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				f;

	i = 0;
	f = 0;
	while (f == 0 && (i < n) && (n != 0))
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (f);
		if (s1[i] > s2[i])
			f = 1;
		else if (s1[i] < s2[i])
			f = -1;
		i++;
	}
	return (f);
}

int main()
{
	char s1[]="abc";
	char s2[]="abc";

	printf("%d\n",ft_strncmp(s1,s2,4));
	return(0);
}

