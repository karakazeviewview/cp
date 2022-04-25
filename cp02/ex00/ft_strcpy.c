char	*ft_strcpy(char *dest, char	*src)
{
	unsigned int	num1;
	unsigned int	num2;

	num1 = 0;
	while (src[num1] != '\0')
		num1++;
	num2 = 0;
	while (num2 < num1 + 1)
	{
		dest[num2] = src[num2];
		num2++;
	}
	return (dest);
}
