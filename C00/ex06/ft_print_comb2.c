#include	<unistd.h>

void	ft_put_number(int i);
void	ft_putchar(char c);
void	print_sequence(int i10, int i, int j10, int j);

void	ft_print_comb2(void)
{
	int	i10;
	int	i;
	int	j10;
	int	j;

	i10 = 0;
	i = 0;
	j10 = 0;
	j = 0;
	while (i10 <= 9)
	{
		while (i <= 9)
		{
			print_sequence(i10, i, j10, j);
			i++;
		}
		i10++;
		i = 0;
	}
}

void	print_sequence(int i10, int i, int j10, int j)
{
	j10 = i10;
	j = i + 1;
	while (j10 <= 9)
	{
		while (j <= 9)
		{
			ft_put_number(i10);
			ft_put_number(i);
			ft_putchar(' ');
			ft_put_number(j10);
			ft_put_number(j);
			j++;
			if (!(i10 == 9 && i == 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		j10++;
		j = 0;
	}
}

void	ft_put_number(int i)
{
	char	c;

	c = i + '0';
	ft_putchar(c);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
