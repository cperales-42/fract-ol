# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cperales <cperales@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/13 18:50:24 by cperales          #+#    #+#              #
#    Updated: 2025/01/18 03:42:31 by cperales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = spopp

CC = cc 

CFLAGS = -Wall -Wextra -Werror -g3

MLX_PATH = mlx/

MLX_LIB = $(MLX_PATH)libmlx.a

MLX_FLAGS = -Lmlx -lmlx -L/usr/lib/X11 -lXext -lX11

LIBFT_PATH = libft/

LIBFT_LIB = $(LIBFT_PATH)libft.a

CFILES = \
				main.c \
				fractol_utils.c \
				random.c

OBJECTS = $(CFILES:.c=.o)

all: subsystems $(NAME)

%.o : %.c
		$(CC) $(CFLAGS) -Imlx -I$(LIBFT_PATH) -c $< -o $@

subsystems: 
	@make -C $(MLX_PATH) all
	@make -C $(LIBFT_PATH) all

$(NAME): $(OBJECTS)
		$(CC) $(CFLAGS) $(MLX_FLAGS) $(OBJECTS) $(MLX_LIB) $(LIBFT_LIB) -o $(NAME)

clean: 
		make -C $(MLX_PATH) clean
		make -C $(LIBFT_PATH) clean
		rm -f $(OBJECTS)

fclean: clean
		make -C $(LIBFT_PATH) fclean
		rm -f $(NAME)

re: fclean all

norm:
		norminette $(LIBFT_PATH) $(CFILES)

.PHONY: all subsystems clean fclean re norm