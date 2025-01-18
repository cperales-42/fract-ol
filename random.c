/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperales <cperales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 03:25:51 by cperales          #+#    #+#             */
/*   Updated: 2025/01/18 04:16:38 by cperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"


void ft_print_spopp(t_data img, int color)
{

    // la S
    
    ft_paint_horizontal_line(img, 150, 200, 150, color);
    ft_paint_horizontal_line(img, 150, 200, 450, color);
    ft_paint_horizontal_line(img, 150, 200, 750, color);
    ft_paint_vertical_line(img, 150, 300, 150, color);
    ft_paint_vertical_line(img, 450, 300, 350, color);

    // la P

    ft_paint_vertical_line(img, 150, 601, 400, color);
    ft_paint_horizontal_line(img, 400, 200, 150, color);
    ft_paint_vertical_line(img, 150, 300, 600, color);
    ft_paint_horizontal_line(img, 400, 200, 450, color);

    // la O
    ft_paint_horizontal_line(img, 650, 200, 150, color);
    ft_paint_horizontal_line(img, 650, 200, 750, color);
    ft_paint_vertical_line(img, 150, 600, 650, color);
    ft_paint_vertical_line(img, 150, 600, 850, color);

    // la P

    ft_paint_vertical_line(img, 150, 601, 900, color);
    ft_paint_horizontal_line(img, 900, 200, 150, color);
    ft_paint_vertical_line(img, 150, 300, 1100, color);
    ft_paint_horizontal_line(img, 900, 200, 450, color);

    // la P

    ft_paint_vertical_line(img, 150, 601, 1150, color);
    ft_paint_horizontal_line(img, 1150, 200, 150, color);
    ft_paint_vertical_line(img, 150, 300, 1350, color);
    ft_paint_horizontal_line(img, 1150, 200, 450, color);
}