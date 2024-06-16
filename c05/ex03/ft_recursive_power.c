//#include <stdlib.h>
//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if(power == 0 && nb == 0)
		return (1);
	else if(power > 0)
		return nb * ft_recursive_power(nb, power - 1);
	return (1);
}
/*int main (int argc, char **argv)
{
	printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	(void)argc;
	return (0);
}*/
