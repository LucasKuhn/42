int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (!(n))
	{
		return (0);
	}
	i = 0;
	while (*s1 && *s2 && (*s1 == *s2) && (i + 1 < n))
	{
		++s1;
		++s2;
		++i;
	}
	return (((unsigned char)*s1) - ((unsigned char)*s2));
}
