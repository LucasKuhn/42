void	ft_swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	middle;

	i = 0;
	middle = size / 2;
	while (i < middle)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
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
