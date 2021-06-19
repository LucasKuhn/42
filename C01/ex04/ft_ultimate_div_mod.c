void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_value;
	int	b_value;

	a_value = *a;
	b_value = *b;
	*a = a_value / b_value;
	*b = a_value % b_value;
	return ;
}
