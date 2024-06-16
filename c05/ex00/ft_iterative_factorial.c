//#include <stdio.h>
//#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb > 0)
	{
		while (nb > 0)
		{
			fact *= nb;
			nb--;
		}
		return (fact);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*int main (int argc, char **argv)
{
	printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
	(void)argc;
	return (0);
}*/
