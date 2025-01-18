/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperales <cperales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:58:02 by cperales          #+#    #+#             */
/*   Updated: 2025/01/18 03:20:41 by cperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
/*int	handle_input(int key, void *param)
{
	return (0);
}*/
void	create_and_destroy_window(void)
{
	void	*mlx_ptr;
	void	*win_ptr;

	mlx_ptr = mlx_init();
	if (!mlx_ptr)
		return ;
	win_ptr = mlx_new_window(mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT, "Spopp");
	if (!win_ptr)
	{
		free(mlx_ptr);
		return ;
	}
	mlx_destroy_window(mlx_ptr, win_ptr);
	mlx_destroy_display(mlx_ptr);
	free(mlx_ptr);
}

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

int	main(void)
{
	void 	*mlx;
	void	*win;
	t_data	img;

	mlx = mlx_init();
	if (!mlx)
		return (0);
	win = mlx_new_window(mlx, WINDOW_WIDTH, WINDOW_HEIGHT, "Fractol");
	if(!win)
	{
		free(mlx);
		return (0);
	}

	img.img = mlx_new_image(mlx, WINDOW_WIDTH, WINDOW_HEIGHT);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel,
						&img.line_length, &img.endian);

	ft_paint_vertical_line(img, WINDOW_HEIGHT, 960, 0X00FF0000);
	//ft_paint_vertical_line(img, 1000, 1000, 0X00FF0000);
	ft_paint_horizontal_line(img, WINDOW_WIDTH, 540, 0x00FF0000);
	//ft_paint_horizontal_line(img, 1000, 1000, 0X00FF0000);
	
	mlx_put_image_to_window(mlx, win, img.img, 0, 0);
	mlx_loop(mlx);

	/*
	mlx_key_hook(win, handle_input, NULL);
	mlx_destroy_window(mlx, win);
	mlx_destroy_display(mlx);
	free(mlx);*/
	return (0);
}
