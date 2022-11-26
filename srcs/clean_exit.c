/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsorabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:45:37 by tsorabel          #+#    #+#             */
/*   Updated: 2022/11/26 13:51:37 by tsorabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	free_tab(char **tab, int argc)
{
	int	i;

	i = -1;
	while (++i < argc)
		if (tab[i] != NULL)
			free(tab[i]);
	free(tab);
}

void	exit_free(t_data *gl)
{
	free(gl->a);
	free(gl->b);
	free_tab(gl->ab, gl->argc);
	free_tab(gl->bb, gl->argc);
	exit(0);
}
