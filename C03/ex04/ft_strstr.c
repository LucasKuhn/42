int	present_in_string(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			if (present_in_string(str, to_find))
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}

int	present_in_string(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (str[i] != to_find[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
