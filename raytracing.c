/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raytracing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 15:30:12 by avella            #+#    #+#             */
/*   Updated: 2016/03/19 15:30:44 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_h.h"

void	parcour_all(t_main *main)
{
	double i;
	double j;
	int mypixelcolor;

	mypixelcolor = 0;
	j = 0;
	while (j < HEIGHT)
	{
		main->j = j;
		i = 0;
		while (i < WIDTH)
		{
			main->i = i;
			mypixelcolor = definee_color(i, j, main);
			if (mypixelcolor != 0)
			{
				my_pixel_put_to_image2(main->img, i, j, mypixelcolor);
			}
			i+=1;
		}
		main->usef = 0;
		main->an = 0;
		j+=1;
	}
}
