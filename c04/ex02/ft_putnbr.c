#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	print_rev(char *num, int i)
{
	while (i >= 0)
	{
		put_char(num[i]);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	unsigned int	n;
	char	num[10];

	i = 0;
	if (nb == 0)
		put_char(0 + '0');
	else
	{
		if (nb < 0)
		{
			put_char('-');
			n = (nb * -1);
		}
		else
			n = nb;
		while (n > 0)
		{
			num[i++] = n % 10 + '0';
			n /= 10;
		}
		i--;
		print_rev(num, i);
	}
}
/*int main ()
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	return (0);
}*/
