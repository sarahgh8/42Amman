#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char num[10];
	int	i;
	unsigned int	n;

	i = 0;
	if(nb < 0) //if the number is negative
	{
		put_char('-');
		n = nb * -1; //absloute value
	}
	else
	{
		n = nb;
	}
	while(n > 0)
	{
		num[i++] = n % 10 + '0';
		n /= 10;
	}
	i--;
	while (i >= 0)
	{
		put_char(num[i]);
		i--;
	}

}
/*int main ()
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	return (0);
}*/
