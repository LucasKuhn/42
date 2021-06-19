#include	<unistd.h>

void	ft_put_numbers(int i, int j, int k);

void	ft_print_comb(void)
{
	int	i;
	int	i10;
	int	i100;

	i100 = 0;
	while (i100 <= 9)
	{
		i10 = i100 + 1;
		while (i10 <= 9)
		{
			i = i10 + 1;
			while (i <= 9)
			{
				ft_put_numbers(i100, i10, i);
				if (!(i100 == 7 && i10 == 8 && i == 9))
				{
					write(1, ", ", 2);
				}
				i++;
			}
			i10++;
		}
		i100++;
	}
}

void	ft_put_numbers(int i, int j, int k)
{
	char	a;
	char	b;
	char	c;

	a = '0' + i;
	b = '0' + j;
	c = '0' + k;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}
