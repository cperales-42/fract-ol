/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperales <cperales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:59:27 by cperales          #+#    #+#             */
/*   Updated: 2025/01/18 04:05:42 by cperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# define WINDOW_WIDTH 1920
# define WINDOW_HEIGHT 1080

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

# include <mlx.h>
#include "libft/libft.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void    ft_paint_vertical_line(t_data img, int startvpos, int npixels, int vpos, int color);
void    ft_paint_horizontal_line(t_data img, int starthpos, int npixels, int vpos, int color);
void ft_print_spopp(t_data img, int color);
#endif