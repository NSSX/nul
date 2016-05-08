/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 15:26:30 by avella            #+#    #+#             */
/*   Updated: 2016/03/19 15:37:06 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_h.h"

int		color_choice(t_main *main)
{
	double	v;
	double	v_value[4];
	int		i;
	double	temp;


	v = 0;
	i = -1;
	my_give_v(v_value, main);
	while (i < 2)
	{
		i++;
		if (v_value[i] > v_value[i + 1])
		{
			temp = v_value[i];
			v_value[i] = v_value[i + 1];
			v_value[i + 1] = temp;
			i = -1;
		}
	}
	i = 0;
	while (i < 4 && v_value[i] <= 0)
	{
		i++;
		if (i == 4)
			break;
	}
	if (v > 3)
		v = v_value[3];
	else
		v = v_value[i];
	my_give_v(v_value, main);
	if (v == v_value[0])
		return (my_light_plan(main));
	else if (v == v_value[1])
		return (my_light_conee(main));
	else if (v == v_value[2])
		return (my_light_cylinder(main));
	else if (v == v_value[3])
		return (my_light_sphere(main));
	return (0x000000);
}

void	whatwhat(double *v_value, t_main *main)
{
	v_value[3] = main->sphere->v;
	v_value[0] = main->plan->v;
}

int		color_four(t_main *main)
{
	if(main->plan->v > 0)
		return (my_light_plan(main));
	return (0x000000);
}

void	give_seven(double *v_value, t_main *main)
{
	v_value[0] = main->plan->v;
	v_value[1] = main->cyl->v;
	v_value[2] = main->plan_inv->v;
	v_value[3] = main->sphere->v;
}

int		color_seven(t_main *main)
{
	double	v;
	double	v_value[4];
	int		i;
	double	temp;


	v = 0;
	i = -1;
	give_seven(v_value, main);
	while (i < 2)
	{
		i++;
		if (v_value[i] > v_value[i + 1])
		{
			temp = v_value[i];
			v_value[i] = v_value[i + 1];
			v_value[i + 1] = temp;
			i = -1;
		}
	}
	i = 0;
	while (i < 4 && v_value[i] <= 0)
	{
		i++;
		if (i == 4)
			break;
	}
	if (v > 3)
		v = v_value[3];
	else
		v = v_value[i];
	give_seven(v_value, main);
	if (v == v_value[0])
		return (my_light_plan(main));
	else if (v == v_value[1])
		return (my_light_cylinder(main));
	else if (v == v_value[2])
		return (my_light_plan_inv(main));
	else if (v == v_value[3])
		return (my_light_sphere(main));
	return (0x000000);
}

int		color_three(t_main *main)
{
	if (main->cyl->v > 0)
		return (my_light_cylinder(main));
	return (0x000000);
}

int		color_one(t_main *main)
{
	if (main->sphere->v > 0)
		return (my_light_sphere(main));
	return (0x000000);
}

int		color_second(t_main *main)
{
	if (main->cone->v > 0)
		return (my_light_conee(main));
	return (0x000000);
}


int		what(t_main *main)
{
	if(main->sphere->v < main->plan->v && main->sphere->v > 0)
	{
		return (my_light_sphere(main));
	}
	else if(main->plan->v < main->sphere->v && main->plan->v > 0)
	{
		return (my_light_plan(main));
	}
	return (0x000000);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		definee_color(int x, int y, t_main *main)
{
	int color;

	main->sphere = (t_vec3d *)malloc(sizeof(t_vec3d) * 1);
	main->cyl = (t_vec3d *)malloc(sizeof(t_vec3d) * 1);
	main->cone = (t_vec3d *)malloc(sizeof(t_vec3d) * 1);
	main->lum = (t_lum *)malloc(sizeof(t_lum) * 1);
	main->eye = (t_coord *)malloc(sizeof(t_coord) * 1);
	main->plan = (t_vec3d *)malloc(sizeof(t_vec3d) * 1);
	main->plan_inv = (t_vec3d *)malloc(sizeof(t_vec3d) * 1);
	if(main->choice == 5)
	{
		define_main(x, y, main);
		plan_inter(main);
		sphere_inter(main);
		cone_inter(main);
		cyl_inter(main);
		color = color_choice(main);
	}
	else if(main->choice == 1)
	{
		main_one(x, y, main);
		sphere_inter(main);
		color = color_one(main);
	}
	else if(main->choice == 2)
	{
		main_second(x, y, main);
		cone_inter(main);
		color = color_second(main);
	}
	else if(main->choice == 3)
	{
		main_three(x, y, main);
		cyl_inter(main);
		color = color_three(main);
	}
	else if(main->choice == 4)
	{
		main_four(x, y, main);
		plan_inter(main);
		color = color_four(main);
	}
	else if(main->choice == 6)
	{
		what_main(x, y, main);
		sphere_inter(main);
		plan_inter(main);
		color = color_choice(main);
	}
	else if(main->choice == 7)
	{
		main_seven(x, y, main);
		sphere_inter(main);
		cyl_inter(main);
		plan_inter_inv(main);
		plan_inter(main);
		color = color_seven(main);
	}
	return (color);
}


void error_msg(void)
{
	ft_putstr("//////////////////////\n");
	ft_putstr("/ 1:SPHERE    2:Cone /\n");
	ft_putstr("/ 3:Cylindre  4:Plan /\n");
	ft_putstr("/       5:ALL IN     /\n");
	ft_putstr("//////////////////////\n");	
}

void parsing(t_main *main, char choice)
{
	if(choice == '1')
		main->choice = 1;
	else if(choice == '2')
		main->choice = 2;
	else if(choice == '3')
		main->choice = 3;
	else if(choice == '4')
		main->choice = 4;
	else if(choice == '5')
		main->choice = 5;
	else
	{
		error_msg();
		exit(1);
	}
}

int		main(int argc, char **argv)
{
	t_main *main;

	if(argc != 2)
	{
		error_msg();
		return (0);
	}
	main = (t_main *)malloc(sizeof(t_main));
	parsing(main, argv[1][0]);
	main->img = (t_img *)malloc(sizeof(t_img) * 1);
	main->mlx = mlx_init();
	main->win = mlx_new_window(main->mlx, WIDTH, HEIGHT, "RayTracer V1");
	main->img->img_ptr = mlx_new_image(main->mlx, WIDTH, HEIGHT);
	main->usef = 0;
	main->c = 0;
	main->an = 0;
	main->x = 0;
  	main->y = 0;
  	main->z = 0;
  	main->rx = 0;
  	main->ry = 0;
	parcour_all(main);
	mlx_put_image_to_window(main->mlx, main->win, main->img->img_ptr, 0, 0);
	mlx_key_hook(main->win, event_mlx, main);
	mlx_loop(main->mlx);
	return (0);
}
