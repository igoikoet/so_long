/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:43:14 by igoikoet          #+#    #+#             */
/*   Updated: 2022/05/19 18:59:48 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

void	ft_fill_exits(t_grid *var)
{
	var->file = mlx_xpm_file_to_image (var->mlx,
			"./images/exit.xpm", &var->pixel,
			&var->pixel);
	var->exits++;
}

void	ft_fill_coins(t_grid *var)
{
	var->file = mlx_xpm_file_to_image (var->mlx,
			"./images/coin3.xpm", &var->pixel,
			&var->pixel);
	var->coins++;
}

void	ft_fill_player(t_grid *var)
{
	var->file = mlx_xpm_file_to_image (var->mlx,
			var->player_dir, &var->pixel, &var->pixel);
	var->play_y = var->map_y;
	var->play_x = var->map_x;
	var->players++;
}

void	ft_fill_wall(t_grid *var)
{
	var->file = mlx_xpm_file_to_image (var->mlx,
			"./images/wall.xpm", &var->pixel,
			&var->pixel);
}

void	ft_fill_window(t_grid *var)
{
	ft_initial(var);
	while ((var->map_y) < (var->map_row))
	{
		var->map_x = 0;
		while ((var->map_x) < (var->map_col))
		{
			ft_all_grass(var);
			if (var->map[var->map_y][var->map_x] == '1' )
				ft_fill_wall(var);
			else if (var->map[var->map_y][var->map_x] == '0' )
				ft_fill_grass(var);
			else if (var->map[var->map_y][var->map_x] == 'C' )
				ft_fill_coins(var);
			else if (var->map[var->map_y][var->map_x] == 'E' )
				ft_fill_exits(var);
			else if (var->map[var->map_y][var->map_x] == 'P' )
				ft_fill_player(var);
			mlx_put_image_to_window (var->mlx, var->mlx_win,
				var->file, var->pixel * var->map_x,
				var->pixel * var->map_y);
			var->map_x++;
		}
		var->map_y++;
	}
	printf("Movements: %d\n", var->player_movements);
}
