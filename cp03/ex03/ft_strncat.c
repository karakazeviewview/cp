char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*(dest + i))
		i++;
	while (j < nb)
	{
		if (*(src + j) == '\0')
			break ;
		else
		{
			*(dest + i) = *(src + j);
			i++;
			j++;
		}
	}
	*(dest + i) = '\0';
	return (dest);
}
