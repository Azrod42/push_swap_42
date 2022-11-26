/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/26 12:39:37 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	swap_ra2(t_data *gl)
{
	int		i;
	char	*temp;

	i = -1;
	if (gl->ab[1])
	{
		temp = gl->ab[0];
		while (++i < gl->argca)
			gl->ab[i] = gl->ab[i + 1];
		gl->ab[i - 1] = temp;
	}
}

void	swap_rb2(t_data *gl)
{
	int		i;
	char	*temp;

	i = -1;
	if (gl->bb[1])
	{
		temp = gl->bb[0];
		while (++i < gl->argcb)
			gl->bb[i] = gl->bb[i + 1];
		gl->bb[i - 1] = temp;
	}
}

void	swap_rr(t_data *gl)
{
	if (gl->ab[1] || gl->bb[1])
	{
		swap_ra2(gl);
		swap_rb2(gl);
		ft_putstr_fd("rr\n", 1);
	}
}
