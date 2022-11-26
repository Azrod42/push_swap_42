/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rrb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/26 13:47:26 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	swap_rrb(t_data *gl)
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
		ft_putstr_fd("rrb\n", 1);
	}

}
