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
			if ((hei == 1 && len == 1) || (hei == y && len == x))
				ft_putchar('o');
			else if ((hei == 1 && len == x) || (hei == y && len == 1))
				ft_putchar('o');
			else if (hei == 1 || hei == y)
				ft_putchar('-');
			else if (len == 1 || len == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			len++;
		}
		ft_putchar('\n');
		hei++;
	}
	return ;
}
