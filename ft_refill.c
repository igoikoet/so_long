/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_refill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:45:04 by igoikoet          #+#    #+#             */
/*   Updated: 2022/05/19 19:00:38 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

void	ft_movements(t_grid *var)
{
	mlx_string_put(var->mlx, var->mlx_win,
		var->pixel * var->map_col * (0.84), 10, 0x080000,
		"Movements: ");
	mlx_string_put(var->mlx, var->mlx_win,
		var->pixel * var->map_col * (0.96), 10, 0x080000,
		ft_itoa(var->player_movements));
}

void	ft_all_grass(t_grid *var)
{
	var->file = mlx_xpm_file_to_image(var->mlx,
			"./images/grass.xpm", &var->pixel, &var->pixel);
	mlx_put_image_to_window (var->mlx, var->mlx_win,
		var->file, var->pixel * var->map_x,
		var->pixel * var->map_y);
}

void	ft_initial(t_grid *var)
{
	var->coins = 0;
	var->players = 0;
	var->exits = 0;
	var->map_y = 0;
}

void	ft_fill_grass(t_grid *var)
{
	var->file = mlx_xpm_file_to_image (var->mlx,
			"./images/grass.xpm", &var->pixel, &var->pixel);
}

void	init_struct(t_grid *var)
{
	var->map_col = 0;
	var->map_row = 0;
	var->map_tot = 0;
	var->map_x = 0;
	var->map_y = 0;
	var->pixel = 0;
	var->coins = 0;
	var->exits = 0;
	var->players = 0;
	var->play_x = 0;
	var->play_y = 0;
	var->player_movements = 0;
}
