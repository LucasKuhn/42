#include	<unistd.h>

void	ft_putstr(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	write(1, str, size);
	return ;
}
