#include"../include/push_swap.h"

void free_tab(char **tab, t_data *gl)
{
	(void)gl;
	int i;

	i = -1;
	while (tab[++i])
	{
		ft_printf("%d\n", i);
		free(tab[i]);
	}
	free(tab);
}

void exit_free(t_data *gl)
{
	free(gl->a);
	free(gl->b);
	free_tab(gl->ab, gl);
	free_tab(gl->bb, gl);
	//free(gl->t);
	//free(gl->tb);
	
	//free_tab(gl->t, gl);
	//free_tab(gl->tb, gl);
	//system("leaks --atExit push_swap");
	exit(0);
}