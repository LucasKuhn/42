int	ft_isspace(char c);

int	ft_atoi(const char *str)
{
	int	number;
	int	sign;

	number = 0;
	sign = 1;
	while (ft_isspace(*str) && !(*str == '-' || *str == '+'))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = (number * 10) + (*str - 48);
		str++;
	}
	return (number * sign);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}
