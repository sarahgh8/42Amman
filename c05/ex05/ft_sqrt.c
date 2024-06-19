//#include <stdio.h>
//#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1 || nb == 0)
		return (nb);
	else if (nb < 0)
		return (0);
	else
	{
		while (i <= nb / 2)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
/*int main (int argc, char **argv)
{
	printf("%d\n", ft_sqrt(atoi(argv[1])));
	(void)argc;
	return (0);
}*/
