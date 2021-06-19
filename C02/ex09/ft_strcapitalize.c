char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);
int		is_spacing(char c);
int		is_letter(char c);
int		is_number(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	if (is_letter(str[i]))
	{
		str[i] = str[i] - 32;
	}
	while (str[i] != '\0')
	{
		if (is_spacing(str[i]) && str[i + 1] != '\0' && is_letter(str[i + 1]))
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}

int	is_spacing(char c)
{
	if (is_letter(c))
		return (0);
	else if (is_number(c))
		return (0);
	else
		return (1);
}

int	is_letter(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
