//#include <stdlib.h>
//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*int main (int argc, char **argv)
{
	printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
	(void)argc;
	return (0);
}*/
