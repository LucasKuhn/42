void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	len;
	int	hei;

	hei = 1;
	while (hei <= y)
	{
		len = 1;
		while (len <= x)
		{
			if (hei == 1 && len == 1)
				ft_putchar('A');
			else if ((hei == y && y != 1) && (len == x && x != 1))
				ft_putchar('A');
			else if ((hei == 1 && len == x) || (hei == y && len == 1))
				ft_putchar('C');
			else if (hei == 1 || hei == y || len == 1 || len == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			len++;
		}
		ft_putchar('\n');
		hei++;
	}
	return ;
}
