//#include <stdlib.h>
//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
/*int main (int argc, char **argv)
{
	printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	(void)argc;
	return (0);
}*/
