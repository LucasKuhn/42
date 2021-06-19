unsigned int	ft_strlen(char *str)
{
	unsigned int		len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	str_size;
	unsigned int	src_size;

	src_size = ft_strlen(src);
	str_size = 0;
	while (*dest)
	{
		str_size++;
		dest++;
	}
	if (str_size >= size)
	{
		return (ft_strlen(src) + size);
	}
	while (*src && str_size + 1 < size)
	{
		*dest = *src;
		dest++;
		src++;
		str_size++;
	}
	*dest = '\0';
	return (str_size + ft_strlen(src));
}
