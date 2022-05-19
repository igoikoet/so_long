/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoikoet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:50:35 by igoikoet          #+#    #+#             */
/*   Updated: 2022/03/23 17:51:25 by igoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./libft/libft.h"
# include <mlx.h>

typedef struct grid
{
	void	*mlx;
	void	*mlx_win;
	int		map_col;
	int		map_row;
	int		map_tot;
	int		map_x;
	int		map_y;
	char	**map;
	char	*file;
	int		pixel;
	int		coins;
	int		exits;
	int		players;
	int		play_x;
	int		play_y;
	int		player_movements;
	char	*player_dir;
}	t_grid;

char	*get_map(int fd);
char	*get_next_line(int fd);
void	ft_create_window(t_grid *var);
void	ft_fill_window(t_grid *var);
void	ft_check_wall(t_grid *var);
int		ft_pressed_key(int keyhook, t_grid *var);
int		ft_close_window(t_grid *var);
void	ft_move_up(t_grid *var);
void	ft_move_down(t_grid *var);
void	ft_move_left(t_grid *var);
void	ft_move_right(t_grid *var);
void	ft_movements(t_grid *var);
void	ft_all_grass(t_grid *var);
void	ft_initial(t_grid *var);
void	ft_fill_grass(t_grid *var);
void	init_struct(t_grid *var);

#endif
