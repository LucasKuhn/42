#include	<unistd.h>

void	ft_print_numbers(void)
{
	char	c;
	int		i;

	i = 0;
	while (i <= 7)
	{
		c = i + '0';
		write(1, &c, 1);
		i++;
	}
}
