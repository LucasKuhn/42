int		ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*dest_end;

	dest_end = dest + ft_strlen(dest);
	i = 0;
	while (i < nb && src[i])
	{
		dest_end[i] = src[i];
		i++;
	}
	dest_end[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
