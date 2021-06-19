int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	next_prime;
	int	i;

	if (nb <= 2)
		return (2);
	next_prime = nb;
	i = 2;
	while (i < (next_prime / i) + 1)
	{
		if (next_prime % i == 0)
		{
			next_prime++;
			i = 2;
		}
		else
			i++;
	}
	return (next_prime);
}
