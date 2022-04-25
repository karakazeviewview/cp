unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	i;
	unsigned int	count;

	count = 0;
	while (src[count])
		count++;
	i = 0;
	while (i < size)
	{
		if (count > i)
			dest[i] = src[i];
		i++;
	}
	if (count >= size)
		dest[size - 1] = '\0';
	else
		dest[count] = '\0';
	return (count);
}
