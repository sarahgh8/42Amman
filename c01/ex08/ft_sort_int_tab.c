//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	
	i = 0;
	j = i + 1;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}
/*int main ()
{
	int arr[] = {4, 76, 23 , 90, 21};
	ft_sort_int_tab(arr, 5);
	for (int i = 0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return (0);
}*/
