#include <stdlib.h>

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	int	num;
	int	size;

	size = max - min;
	num = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((size) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (size > num)
	{
		*(*(range) + num) = min + num;
		num++;
	}
	return (size);
}
