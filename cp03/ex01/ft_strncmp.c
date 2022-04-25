int	ft_strncmp(char *s1, char	*s2, unsigned int	n)
{
	unsigned int	x;

	x = 0;
	while (x < n)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		if (s1[x] == '\0' || s2[x] == '\0')
			break ;
		x++;
	}
	return (0);
}
