/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/25 17:43:44 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

int	swap_sb(t_data *gl)
{
	char	*temp;

	if (gl->bb[0] && gl->bb[1])
	{
		temp = gl->bb[0];
		gl->bb[0] = gl->bb[1];
		gl->bb[1] = temp;
		ft_putstr_fd("sb\n", 1);
		return (1);
	}
	return (0);
}
