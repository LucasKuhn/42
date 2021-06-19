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
