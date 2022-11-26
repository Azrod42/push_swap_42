/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/26 14:39:08 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	swap_rra2(t_data *gl)
{
	int		i;
	char	*temp;

	i = 0;
	if (gl->ab[1])
	{
		while (i < gl->argca)
			i++;
		temp = gl->ab[i - 1];
		while (--i > 0)
			gl->ab[i] = gl->ab[i - 1];
		gl->ab[i] = temp;
	}
}

void	swap_rrb2(t_data *gl)
{
	int		i;
	char	*temp;

	i = 0;
	if (gl->bb[1])
	{
		while (i < gl->argcb)
			i++;
		temp = gl->bb[i - 1];
		while (--i > 0)
			gl->bb[i] = gl->bb[i - 1];
		gl->bb[i] = temp;
	}
}

void	swap_rrr(t_data *gl)
{
	if (gl->bb[1] || gl->ab[1])
	{
		swap_rra2(gl);
		swap_rrb2(gl);
		ft_putstr_fd("rrr\n", 1);
	}
}
