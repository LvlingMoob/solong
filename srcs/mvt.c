/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mvt.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberengu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:02:15 by mberengu          #+#    #+#             */
/*   Updated: 2021/09/08 15:02:16 by mberengu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	action_mvt(int key, t_pos *pos, int *nbr)
{
	*nbr += 1;
	if (key == 13 || key == 126)
	{
		if (map_adjustment(pos, UP))
			pos->y -= 64;
	}
	if (key == 0 || key == 123)
	{
		if (map_adjustment(pos, LEFT))
			pos->x -= 64;
	}
	if (key == 2 || key == 124)
	{
		if (map_adjustment(pos, RIGHT))
			pos->x += 64;
	}
	if (key == 1 || key == 125)
	{
		if (map_adjustment(pos, DOWN))
			pos->y += 64;
	}
}
