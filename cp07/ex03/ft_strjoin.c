#include <stdlib.h>

char	*ft_strcat(char	*dest, char	*src)
{
	char	*i;

	i = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (i);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (*(str++) != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_msize(int	size, char	**strs, char	*sep)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
		length += ft_strlen(strs[i++]);
	length += (size - 1) * ft_strlen(sep);
	return (length);
}

char	*ft_strjoin(int	size, char	**strs, char *sep)
{
	int		num;
	char	*word;

	if (!size)
		return (malloc(sizeof(char)));
	word = malloc(sizeof(char) * ft_msize(size, strs, sep));
	if (!word)
		return (0);
	*word = 0;
	num = 0;
	while (num < size)
	{
		ft_strcat(word, strs[num]);
		if (num < size - 1)
			ft_strcat(word, sep);
		num++;
	}
	return (word);
}
