#include <stdlib.h>
char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	char	*pointer;

	pointer = malloc(sizeof(src) * 1);
	if (pointer == NULL)
		return (NULL);
	if (pointer)
		ft_strcpy(pointer, src);
	return (pointer);
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
