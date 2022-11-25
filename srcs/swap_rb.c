#include"../include/push_swap.h"

void	swap_rb(t_data *gl)
{
	int	i;

	i = -1;
	if (gl->bb[1])
	{
		while(gl->bb[++i])
			gl->tb[i] = gl->bb[i];
		gl->tb[i] = NULL;
		gl->bb[i - 1] = gl->bb[0]; 
		i = -1;
		while(gl->tb[++i])
			gl->bb[i - 1] = gl->tb[i];
		gl->bb[i] = NULL;
		ft_putstr_fd("rb\n", 1);
	}
}