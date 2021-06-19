void	ft_swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		j++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	a_value;
	int	b_value;

	a_value = *a;
	b_value = *b;
	*a = b_value;
	*b = a_value;
	return ;
}
