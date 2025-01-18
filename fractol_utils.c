/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperales <cperales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 02:51:31 by cperales          #+#    #+#             */
/*   Updated: 2025/01/18 03:42:01 by cperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void    ft_paint_horizontal_line(t_data img, int starthpos, int npixels, int vpos, int color)
{
    int i;
    
    i = starthpos;
    while(i < npixels + starthpos)
    {
        my_mlx_pixel_put(&img, i, vpos, color);
        i++;
    }   
}

void    ft_paint_vertical_line(t_data img, int startvpos, int npixels, int hpos, int color)
{
    int i;

    i = startvpos;
    while(i < npixels + startvpos)
    {
        my_mlx_pixel_put(&img, hpos, i, color);
        i++;
    }   
}