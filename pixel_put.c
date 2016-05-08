/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel_put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 15:24:13 by avella            #+#    #+#             */
/*   Updated: 2016/03/19 15:25:59 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_h.h"

int		my_pixel_put_to_image2(t_img *img, int x, int y, int color)
{
	int				a;
	int				b;
	unsigned char	*col;

	if (x >= WIDTH || y >= HEIGHT || x < 0 || y < 0)
		return (0);
	img->data = mlx_get_data_addr(img->img_ptr,
			&img->bpp, &img->sizeline, &img->endian);
	col = (unsigned char *)&color;
	a = img->bpp / 8;
	b = img->sizeline;
	if (img->cos < 0)
		img->cos = 0;
	img->data[(x * a) + 0 + (y * b)] = col[0] * img->cos;
	img->data[(x * a) + 1 + (y * b)] = col[1] * img->cos;
	img->data[(x * a) + 2 + (y * b)] = col[2] * img->cos;
	img->data[(x * a) + 3 + (y * b)] = col[3] * img->cos;
	return (0);
}
