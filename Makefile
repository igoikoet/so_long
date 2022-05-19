NAME = so_long

LIB = libft/

MLX = mlx/

SRC = 	so_main.c\
		ft_create_window.c\
		ft_fill_window.c\
		ft_check_wall.c\
		ft_pressed_key.c\
		ft_player_move.c\
		ft_refill.c

OBJS = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra 

RM = rm -f

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -Imlx -c $^ -o $@

$(NAME): $(OBJS)
	$(MAKE) -C $(LIB)
	$(MAKE) -C $(MLX)
	cp  $(LIB)libft.a .
	$(CC) $(CFLAGS)  libft.a -Imlx -Iso_long.h -Lmlx -lmlx -framework OpenGL -framework AppKit  $^ -o $@
	

clean:
	$(RM) $(OBJS) $(LIB)*.o $(MLX)*.o

fclean: clean
	$(RM) $(NAME) $(LIB)libft.a $(MLX)libmlx.a libft.a libmlx.a

re: fclean all

.PHONY: all clean fclean re

