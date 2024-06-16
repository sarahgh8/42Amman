//#include <stdio.h>
//#include <stdlib.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*int main (int argc, char **argv)
{
	printf("%d\n", ft_fibonacci(atoi(argv[1])));
	(void)argc;
	return (0);
}*/
