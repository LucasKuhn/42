int	ft_sqrt(int nb)
{
	long int	number;
	long int	sqrt;

	number = nb;
	sqrt = 1;
	while (sqrt <= number)
	{
		if (sqrt * sqrt == number)
		{
			return (sqrt);
		}
		if (sqrt * sqrt > number)
		{
			return (0);
		}
		sqrt++;
	}
	return (0);
}
