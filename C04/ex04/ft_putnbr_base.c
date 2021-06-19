#include <unistd.h>

int		ft_strlen(char *str);
int		base_is_valid(char *base);
void	print_in_base(long int nbr, int base_size, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_size;
	long int	long_nbr;

	if (!base_is_valid(base))
		return ;
	long_nbr = (long int) nbr;
	if (nbr < 0)
	{
		write(1, "-", 1);
		long_nbr = -long_nbr;
	}
	base_size = ft_strlen(base);
	print_in_base(long_nbr, base_size, base);
}

void	print_in_base(long int nbr, int base_size, char *base)
{
	if (nbr >= base_size)
	{
		print_in_base(nbr / base_size, base_size, base);
		print_in_base(nbr % base_size, base_size, base);
	}
	else
	{
		write(1, &base[nbr], 1);
	}
}

int	base_is_valid(char *base)
{
	int		i;

	if (!(base[0]) || !(base[1]))
		return (0);
	while (*base)
	{
		if (*base == '-' || *base == '+')
			return (0);
		i = 1;
		while (base[i])
		{
			if (*base == base[i])
				return (0);
			i++;
		}
		base++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
