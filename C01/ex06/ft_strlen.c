int	ft_strlen(char *str)
{
	int		len;
	char	c;

	len = 0;
	c = str[len];
	while (c != '\0')
	{
		len++;
		c = str[len];
	}
	return (len);
}
