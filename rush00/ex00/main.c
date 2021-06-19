#include <stdlib.h>

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	char	*a;
	char	*b;
	int		x;
	int		y;

	if (argc == 3)
	{
		a = argv[1];
		b = argv[2];
		x = atoi(a);
		y = atoi(b);
		if (x != 0 && y != 0)
			rush(x, y);
	}
	else
	{
		rush(5, 5);
	}
	return (0);
}
