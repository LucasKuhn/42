int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_end;

	dest_end = dest + ft_strlen(dest);
	ft_strcpy(dest_end, src);
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
