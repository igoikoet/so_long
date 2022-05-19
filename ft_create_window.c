/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:42:52 by igoikoet          #+#    #+#             */
/*   Updated: 2022/05/19 18:59:33 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_create_window(t_grid *var)
{
	var->pixel = 50;
	var->mlx = mlx_init();
	var->mlx_win = mlx_new_window(var->mlx,
			var->pixel * var->map_col,
			var->pixel * var->map_row, "So_long@GOIKO");
}
