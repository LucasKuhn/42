#include <unistd.h>
void	ft_sort_argv(char **argv, int argc);
void	ft_print_argv(char **argv, int argc);
int		ft_strcmp(char *s1, char *s2);
char	downcase(char c);

int	main(int argc, char *argv[])
{
	ft_sort_argv(argv, argc);
	ft_print_argv(argv, argc);
	return (0);
}

void	ft_sort_argv(char **argv, int argc)
{
	int		i;
	int		j;
	char	*tmp;

	j = 0;
	while (j < argc - 1)
	{
		i = 0;
		// while (argv[i] == argv[0])
		// 	i++;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i+1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
			}
			i++;
		}
		j++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_print_argv(char **argv, int argc)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
}
