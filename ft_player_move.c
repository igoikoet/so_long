/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:43:38 by igoikoet          #+#    #+#             */
/*   Updated: 2022/05/19 19:00:01 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_up(t_grid *var)
{
	var->map[var->play_y][var->play_x] = '0';
	var->map[var->play_y - 1][var->play_x] = 'P';
	var->player_movements++;
	var->player_dir = "./images/Maskmanb.xpm";
	ft_fill_window(var);
}

void	ft_move_down(t_grid *var)
{
	var->map[var->play_y][var->play_x] = '0';
	var->map[var->play_y + 1][var->play_x] = 'P';
	var->player_movements++;
	var->player_dir = "./images/maskmanf.xpm";
	ft_fill_window(var);
}

void	ft_move_left(t_grid *var)
{
	var->map[var->play_y][var->play_x] = '0';
	var->map[var->play_y][var->play_x - 1] = 'P';
	var->player_movements++;
	var->player_dir = "./images/maskmanl.xpm";
	ft_fill_window(var);
}

void	ft_move_right(t_grid *var)
{
	var->map[var->play_y][var->play_x] = '0';
	var->map[var->play_y][var->play_x + 1] = 'P';
	var->player_movements++;
	var->player_dir = "./images/maskmanr.xpm";
	ft_fill_window(var);
}
