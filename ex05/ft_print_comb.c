#include<unistd.h>

void	ft_print_comb(void)
{
	int		v_index[3];
	char	v_characters[4];

	v_index[0] = 0;
	while (v_index[0] < 10)
	{
		v_characters[0] = '0' + v_index[0];
		v_index[1] = v_index[0] + 1;
		while (v_index[1] < 10)
		{
			v_characters[1] = '0' + v_index[1];
			v_index[2] = v_index[1] + 1;
			while (v_index[2] < 10)
			{
				v_characters[2] = '0' + v_index[2];
				write(1, v_characters, 3);
				if (!(v_index[0] == 7 && v_index[1] == 8 && v_index[2] == 9))
					write(1, ", ", 2);
				v_index[2]++;
			}
			v_index[1]++;
		}
		v_index[0]++;
	}
}
