/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_pb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/25 17:42:09 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	swap_pb(t_data *gl)
{
	int	i;

	i = -1;
	if (gl->ab[0])
	{
		while (gl->ab[++i])
			gl->t[i] = gl->ab[i];
		gl->t[i] = NULL;
		i = -1;
		while (gl->bb[++i])
			gl->tb[i] = gl->bb[i];
		gl->tb[i] = NULL;
		i = 0;
		gl->bb[0] = gl->ab[0];
		while (gl->tb[++i - 1])
			gl->bb[i] = gl->tb[i - 1];
		gl->bb[i] = NULL;
		i = 0;
		if (gl->ab[1] == NULL)
			gl->ab[0] = NULL;
		while (gl->t[++i])
			gl->ab[i - 1] = gl->t[i];
		gl->ab[i - 1] = NULL;
		ft_putstr_fd("pb\n", 1);
	}
}
