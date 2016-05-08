/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefull_func.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 15:29:08 by avella            #+#    #+#             */
/*   Updated: 2016/03/19 15:29:27 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_h.h"

int		event_mlx(int keycode, t_main *main)
{
	if (keycode == 53)
		exit(1);
	if (keycode == 18)
		{
			mlx_destroy_image(main->mlx, main->img->img_ptr);
    	    main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
			main->choice = 1;
			parcour_all(main);
			mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
		}
	if (keycode == 19)
		{
	mlx_destroy_image(main->mlx, main->img->img_ptr);
    	    main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
			main->choice = 2;
			parcour_all(main);
			mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
		
		}
	if (keycode == 20)
		{
			mlx_destroy_image(main->mlx, main->img->img_ptr);
    	    main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
			main->choice = 3;
			parcour_all(main);
			mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
		}
	if (keycode == 21)
		{
			mlx_destroy_image(main->mlx, main->img->img_ptr);
    	    main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
			main->choice = 4;
			parcour_all(main);
			mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
		}
		if (keycode == 23)
		{
			mlx_destroy_image(main->mlx, main->img->img_ptr);
    	    main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
			main->choice = 5;
			parcour_all(main);
			mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
		}
		if(keycode == 123)
		{
				main->y += 200;
			mlx_destroy_image(main->mlx, main->img->img_ptr);
    	    main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
			main->choice = 5;
			parcour_all(main);
			mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
		
		}
		if(keycode == 124)
		{
			main->y -= 200;
			mlx_destroy_image(main->mlx, main->img->img_ptr);
    	    main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
			main->choice = 5;
			parcour_all(main);
			mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
		
		}
			if(keycode == 126)
		{
			main->z += 200;
			mlx_destroy_image(main->mlx, main->img->img_ptr);
    	    main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
			main->choice = 5;
			parcour_all(main);
			mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
		
		}
			if(keycode == 125)
		{
			main->z -= 200;
			mlx_destroy_image(main->mlx, main->img->img_ptr);
    	    main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
			main->choice = 5;
			parcour_all(main);
			mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
		
		}
				if(keycode == 69)
		{
			main->x += 10;
			mlx_destroy_image(main->mlx, main->img->img_ptr);
    	    main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
			main->choice = 5;
			parcour_all(main);
			mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
		
		}
				if(keycode == 78)
		{
			main->x -= 10;
			mlx_destroy_image(main->mlx, main->img->img_ptr);
    	    main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
			main->choice = 5;
			parcour_all(main);
			mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
		
		}
					if(keycode == 2)
		{
			main->rx += 10;
			mlx_destroy_image(main->mlx, main->img->img_ptr);
    	    main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
			main->choice = 5;
			parcour_all(main);
			mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
		
		}
						if(keycode == 0)
		{
			main->rx -= 10;
			mlx_destroy_image(main->mlx, main->img->img_ptr);
    	    main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
			main->choice = 5;
			parcour_all(main);
			mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
		
		}
						if(keycode == 14)
		{
			mlx_destroy_image(main->mlx, main->img->img_ptr);
    	    main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
			main->choice = 6;
			parcour_all(main);
			mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
		
		}	
					if(keycode == 12)
		{
			mlx_destroy_image(main->mlx, main->img->img_ptr);
    	    main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
			main->choice = 7;
			parcour_all(main);
			mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
		
		}
		return (0);
}

double	mypow(int a, int n)
{
	double	res;
	int		i;

	i = 1;
	res = a;
	while (i < n)
	{
		res = res * a;
		i++;
	}
	return (res);
}
