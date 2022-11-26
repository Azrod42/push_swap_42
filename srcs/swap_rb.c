/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/26 12:34:54 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	swap_rb(t_data *gl)
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
		ft_putstr_fd("rb\n", 1);
	}
}
