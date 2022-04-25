int	ft_strlen(char	*str)
{
	int	numcnt;

	numcnt = 0;
	while (*str != '\0')
	{
		numcnt++;
		str++;
	}
	return (numcnt);
}

char	*ft_strcat(char	*dest, char *src)
{
	int	i;

	i = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
