/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pressed_key.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:44:21 by igoikoet          #+#    #+#             */
/*   Updated: 2022/05/19 19:00:17 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_close_window(t_grid *var)
{
	mlx_destroy_window(var->mlx, var->mlx_win);
	exit(1);
	return (0);
}

int	ft_pressed_key(int keyhook, t_grid *var)
{
	if (keyhook == 53)
		ft_close_window(var);
	if (var->coins == 0
		&& ((keyhook == 2 && var->map[var->play_y][var->play_x + 1] == 'E')
		|| (keyhook == 1 && var->map[var->play_y + 1][var->play_x] == 'E')
		|| (keyhook == 0 && var->map[var->play_y][var->play_x - 1] == 'E')
		|| (keyhook == 13 && var->map[var->play_y - 1][var->play_x] == 'E')))
		ft_close_window(var);
	if (keyhook == 13 && (var->map[var->play_y - 1][var->play_x] != '1'
		&& var->map[var->play_y - 1][var->play_x] != 'E'))
		ft_move_up(var);
	if (keyhook == 0 && (var->map[var->play_y][var->play_x - 1] != '1'
		&& var->map[var->play_y][var->play_x - 1] != 'E'))
		ft_move_left(var);
	if (keyhook == 1 && (var->map[var->play_y + 1][var->play_x] != '1'
		&& var->map[var->play_y + 1][var->play_x] != 'E'))
		ft_move_down(var);
	if (keyhook == 2 && (var->map[var->play_y][var->play_x + 1] != '1'
		&& var->map[var->play_y][var->play_x + 1] != 'E'))
		ft_move_right(var);
	return (0);
}
