/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/25 17:49:16 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	fill_binary(t_data *gl)
{
	int	i;
	int	k;

	i = -1;
	k = 0;
	if (gl->maxlen < 3)
		k = 3;
	else
		k = gl->maxlen;
	while (++i < gl->argc)
	{
		while ((int)ft_strlen(gl->ab[i]) < k)
			gl->ab[i] = ft_strjoin("O", gl->ab[i]);
	}
}

void	init_list_binary(t_data *gl)
{
	int	i;

	i = -1;
	gl->maxlen = 0;
	while (++i < gl->argc)
	{
		gl->ab[i] = ft_convet_base(gl->a[i], "O1");
		if ((int)ft_strlen(gl->ab[i]) > gl->maxlen)
			gl->maxlen = ft_strlen(gl->ab[i]);
	}
	fill_binary(gl);
}

void	set_b_to_a(t_data *gl)
{
	int	j;

	j = -1;
	while (++j < gl->argc)
		gl->a[j] = gl->b[j];
}

void	simplify_list(t_data *gl)
{
	t_simp	i;

	i.modif = 1;
	i.pos = -1;
	while (i.modif)
	{
		i.i = -1;
		i.modif = 0;
		i.min = 2147483647;
		while (++i.i < gl->argc)
		{
			if (gl->a[i.i] <= i.min && gl->a[i.i] != MIN)
			{
				i.min = gl->a[i.i];
				i.min_pos = i.i;
				i.modif++;
			}
		}
		if (i.modif != 0)
		{
			gl->b[i.min_pos] = ++i.pos;
			gl->a[i.min_pos] = MIN;
		}
	}
}

void	init_list(int argc, char **argv, t_data *gl)
{
	int	i;

	gl->a = malloc(sizeof(int) * (argc));
	gl->b = malloc(sizeof(int) * (argc));
	gl->ab = malloc(sizeof(char *) * (argc + BUF));
	gl->bb = malloc(sizeof(char *) * (argc + BUF));
	gl->t = malloc(sizeof(char *) * (argc + BUF));
	gl->tb = malloc(sizeof(char *) * (argc + BUF));
	gl->argc = argc - 1;
	i = -1;
	while (++i < argc -1)
		gl->a[i] = ft_atoi(argv[i + 1]);
	gl->a[i] = 0;
}
