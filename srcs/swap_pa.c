/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_pa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/25 17:41:40 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	swap_pa(t_data *gl)
{
	int	i;

	i = -1;
	if (gl->bb[0])
	{
		while (gl->ab[++i])
			gl->t[i] = gl->ab[i];
		gl->t[i] = NULL;
		i = -1;
		while (gl->bb[++i])
			gl->tb[i] = gl->bb[i];
		gl->tb[i] = NULL;
		i = 0;
		gl->ab[0] = gl->bb[0];
		while (gl->t[++i - 1])
			gl->ab[i] = gl->t[i - 1];
		gl->ab[i] = NULL;
		i = 0;
		if (gl->bb[1] == NULL)
			gl->bb[0] = NULL;
		while (gl->tb[++i])
			gl->bb[i - 1] = gl->tb[i];
		gl->bb[i - 1] = NULL;
		ft_putstr_fd("pa\n", 1);
	}
}
