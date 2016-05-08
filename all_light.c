/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_light.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 14:34:17 by avella            #+#    #+#             */
/*   Updated: 2016/03/19 15:19:57 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_h.h"

int		my_light_plan(t_main *main)
{
	double v1;
	double n1;
	double n2;

	main->plan->xp = main->eye->xeye + main->eye->vx * main->plan->v;
	main->plan->yp = main->eye->yeye + main->eye->vy * main->plan->v;
	main->plan->zp = main->eye->zeye + main->eye->vz * main->plan->v;
	main->lum->vx = main->lum->x - main->plan->xp;
	main->lum->vy = main->lum->y - main->plan->yp;
	main->lum->vz = main->lum->z - main->plan->zp;
	v1 = (main->lum->nx * main->lum->vx + main->lum->ny
			* main->lum->vy + main->lum->nz * main->lum->vz);
	n1 = (pow(main->lum->nx, 2) + pow(main->lum->ny, 2)
			+ pow(main->lum->nz, 2));
	n2 = (pow(main->lum->vx, 2) + pow(main->lum->vy, 2)
			+ pow(main->lum->vz, 2));
	main->img->cos = v1 / (sqrt(n1) * sqrt(n2));
	if (my_shadow_sphere(main, main->plan->v) == 2 ||
			my_shadow_cylinder(main, main->plan->v) == 2 ||
			my_shadow_conee(main, main->plan->v) == 2)
		return (0x000000);
int color1 = 0xFF0000;
int color2 = 0x0000FF;
int color;
	if(main->i > main->usef + 120)
	{
		main->usef+= 120;
	}
	if(main->j > main->an + 80)
	{
		main->an += 80;
		if(main->c == 0)
			main->c = 1;
		else if(main->c == 1)
			main->c = 0;
	}
	if(main->c == 1)
		color = color1;
	else
		color = color2;
	if(main->i >= main->usef && main->i <= main->usef + 60)
	{
		return(color);
	}
	else
		return(0x00FF00);
}

int		my_light_plan_inv(t_main *main)
{
	double v1;
	double n1;
	double n2;

	main->plan_inv->xp = main->eye->xeye + main->eye->vx * main->plan_inv->v;
	main->plan_inv->yp = main->eye->yeye + main->eye->vy * main->plan_inv->v;
	main->plan_inv->zp = main->eye->zeye + main->eye->vz * main->plan_inv->v;
	main->lum->vx = main->lum->x - main->plan_inv->xp;
	main->lum->vy = main->lum->y - main->plan_inv->yp;
	main->lum->vz = main->lum->z - main->plan_inv->zp;
	v1 = (main->lum->nx * main->lum->vx + main->lum->ny
			* main->lum->vy + main->lum->nz * main->lum->vz);
	n1 = (pow(main->lum->nx, 2) + pow(main->lum->ny, 2)
			+ pow(main->lum->nz, 2));
	n2 = (pow(main->lum->vx, 2) + pow(main->lum->vy, 2)
			+ pow(main->lum->vz, 2));
	main->img->cos = v1 / (sqrt(n1) * sqrt(n2));
	return (0xFF0000);
}


int		my_light_cylinder(t_main *main)
{
	double v1;
	double n1;
	double n2;

	main->cyl->xp = main->eye->xeye + (main->cyl->x * main->cyl->v);
	main->cyl->yp = main->eye->yeye + (main->cyl->y * main->cyl->v);
	main->cyl->zp = main->eye->zeye + (main->cyl->z * main->cyl->v);
	main->lum->nx = main->cyl->xp;
	main->lum->ny = main->cyl->yp;
	main->lum->nz = 0;
	main->lum->vx = main->lum->x - main->cyl->xp;
	main->lum->vy = main->lum->y - main->cyl->yp;
	main->lum->vz = main->lum->z - main->cyl->zp;
	v1 = (main->lum->nx * main->lum->vx + main->lum->ny
			* main->lum->vy + main->lum->nz * main->lum->vz);
	n1 = (pow(main->lum->nx, 2) + pow(main->lum->ny, 2)
			+ pow(main->lum->nz, 2));
	n2 = (pow(main->lum->vx, 2) + pow(main->lum->vy, 2)
			+ pow(main->lum->vz, 2));
	main->img->cos = v1 / (sqrt(n1) * sqrt(n2));
	if (my_shadow_sphere(main, main->cyl->v) == 2 ||
			my_shadow_conee(main, main->cyl->v) == 2)
		return (0x000000);
	return (0xFFFF00);
}

int		my_light_conee(t_main *main)
{
	double v1;
	double n1;
	double n2;

	main->cone->xp = main->eye->xeye + (main->cone->x * main->cone->v);
	main->cone->yp = main->eye->yeye + (main->cone->y * main->cone->v);
	main->cone->zp = main->eye->zeye + (main->cone->z * main->cone->v);
	main->lum->nx = main->cone->xp;
	main->lum->ny = main->cone->yp;
	main->lum->nz = 0.05 * main->cone->zp;
	main->lum->vx = main->lum->x - main->cone->xp;
	main->lum->vy = main->lum->y - main->cone->yp;
	main->lum->vz = main->lum->z - main->cone->zp;
	v1 = (main->lum->nx * main->lum->vx + main->lum->ny
			* main->lum->vy + main->lum->nz * main->lum->vz);
	n1 = (pow(main->lum->nx, 2) + pow(main->lum->ny, 2)
			+ pow(main->lum->nz, 2));
	n2 = (pow(main->lum->vx, 2) + pow(main->lum->vy, 2)
			+ pow(main->lum->vz, 2));
	main->img->cos = v1 / (sqrt(n1) * sqrt(n2));
	if (my_shadow_sphere(main, main->cone->v) == 2 ||
			my_shadow_cylinder(main, main->cone->v) == 2)
		return (0x000000);
	return (0x0000FF);
}

int		my_light_sphere(t_main *main)
{
	double v1;
	double n1;
	double n2;

	main->sphere->xp = main->eye->xeye + (main->sphere->x * main->sphere->v);
	main->sphere->yp = main->eye->yeye + (main->sphere->y * main->sphere->v);
	main->sphere->zp = main->eye->zeye + (main->sphere->z * main->sphere->v);
	main->lum->nx = main->sphere->xp;
	main->lum->ny = main->sphere->yp;
	main->lum->nz = main->sphere->zp;
	main->lum->vx = main->lum->x - main->sphere->xp;
	main->lum->vy = main->lum->y - main->sphere->yp;
	main->lum->vz = main->lum->z - main->sphere->zp;
	v1 = (main->lum->nx * main->lum->vx + main->lum->ny
			* main->lum->vy + main->lum->nz * main->lum->vz);
	n1 = (pow(main->lum->nx, 2) + pow(main->lum->ny, 2)
			+ pow(main->lum->nz, 2));
	n2 = (pow(main->lum->vx, 2) + pow(main->lum->vy, 2)
			+ pow(main->lum->vz, 2));
	main->img->cos = v1 / (sqrt(n1) * sqrt(n2));
	if (my_shadow_cylinder(main, main->sphere->v) == 2 ||
			my_shadow_conee(main, main->sphere->v) == 2)
		return (0x000000);
	return (0xFF0000);
}
