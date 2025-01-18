/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperales <cperales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 02:51:31 by cperales          #+#    #+#             */
/*   Updated: 2025/01/18 03:17:44 by cperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void    ft_paint_horizontal_line(t_data img, int npixels, int vpos, int color)
{
    int    i;

    i = 1;
    while(i < npixels)
    {
        my_mlx_pixel_put(&img, i, vpos, color);
        i++;
    }   
}

void    ft_paint_vertical_line(t_data img, int npixels, int hpos, int color)
{
    int    i;

    i = 1;
    while(i < npixels)
    {
        my_mlx_pixel_put(&img, hpos, i, color);
        i++;
    }   
}