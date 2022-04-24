#include<unistd.h>
void	ft_print_comb2(void)
{
	int		v_index1;
	int		v_index2;
	char	v_character1[3];
	char	v_character2[3];

	v_index1 = 0;
	while (v_index1 < 100)
	{
		v_character1[0] = '0' + v_index1 / 10;
		v_character1[1] = '0' + v_index1 % 10;
		v_index2 = v_index1 + 1;
		while (v_index2 < 100)
		{
			v_character2[0] = '0' + v_index2 / 10;
			v_character2[1] = '0' + v_index2 % 10;
			write(1, &v_character1, 2);
			write(1, " ", 1);
			write(1, &v_character2, 2);
			if (!(v_index1 == 98 && v_index2 == 99))
				write(1, ", ", 2);
			v_index2++;
		}
		v_index1++;
	}
}
