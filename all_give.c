/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_give.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 15:48:12 by avella            #+#    #+#             */
/*   Updated: 2016/03/19 14:33:59 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_h.h"

void	define_main(int x, int y, t_main *main)
{
	main->lum->nx = 0;
	main->lum->ny = 0;
	main->lum->nz = 100;
	main->lum->x = -3000;
	main->lum->y = 0;
	main->lum->z = 2000;
	main->eye->vx = 100;
	main->eye->vy = (WIDTH / 2) - x;
	main->eye->vz = (HEIGHT / 2) - y;
	main->eye->xeye = -3000;
	main->eye->yeye = 600 + main->y;
	main->eye->zeye = 500 + main->z;
	main->sphere->x = main->eye->vx + 1000 - 400;
	main->sphere->y = main->eye->vy + 0;
	main->sphere->z = main->eye->vz + -300;
	main->sphere->rayon = 800;
	main->cyl->x = main->eye->vx + 1000;
	main->cyl->y = main->eye->vy + 0 - 100;
	main->cyl->z = main->eye->vz + -300;
	main->cyl->rayon = 150;
	main->cone->x = main->eye->vx + 1000;
	main->cone->y = main->eye->vy + 100;
	main->cone->z = main->eye->vz + -300;
			int angle = main->x;
	main->cyl->y = main->cyl->y * cos((angle*M_PI)/180.0) - 
    main->cyl->z * sin((angle*M_PI)/180.0);
     main->cyl->z = 0.0 * sin((angle * M_PI)/180.0) + 
    main->cyl->z * cos((angle * M_PI)/180.0);
}

void	main_four(int x, int y, t_main *main)
{
	main->lum->nx = 0;
	main->lum->ny = 0;
	main->lum->nz = 100;
	main->lum->x = -3000;
	main->lum->y = 0;
	main->lum->z = 2000;
	main->eye->vx = 0;
	main->eye->vy = (WIDTH / 2) - x;
	main->eye->vz = (HEIGHT / 2) - y;
	main->eye->xeye = -3000;
	main->eye->yeye = 300;
	main->eye->zeye = 500;

}

void	main_seven(int x, int y, t_main *main)
{
	main->lum->nx = 0;
	main->lum->ny = 0;
	main->lum->nz = 100;
	main->lum->x = -3000;
	main->lum->y = 0;
	main->lum->z = 2000;
	main->eye->vx = 0;
	main->eye->vy = (WIDTH / 2) - x;
	main->eye->vz = (HEIGHT / 2) - y;
	main->eye->xeye = -4000;
	main->eye->yeye = 300;
	main->eye->zeye = 900;
	main->cyl->x = main->eye->vx + 900;
	main->cyl->y = main->eye->vy + 0;
	main->cyl->z = main->eye->vz + 0;
	main->cyl->rayon = 200;
	main->sphere->x = main->eye->vx + 900;
	main->sphere->y = main->eye->vy + 0;
	main->sphere->z = main->eye->vz + -300;
	main->sphere->rayon = 400;
}

	void	main_three(int x, int y, t_main *main)
{
	main->lum->nx = 0;
	main->lum->ny = 0;
	main->lum->nz = 100;
	main->lum->x = -2700;
	main->lum->y = 2000;
	main->lum->z = 4000;
	main->eye->vx = 100;
	main->eye->vy = (WIDTH / 2) - x;
	main->eye->vz = (HEIGHT / 2) - y;
	main->eye->xeye = -500;
	main->eye->yeye = 0;
	main->eye->zeye = 0;
	main->cyl->x = main->eye->vx + CYL_X;
	main->cyl->y = main->eye->vy + CYL_Y;
	main->cyl->z = main->eye->vz + CYL_Z;
	main->cyl->rayon = 250;
}

	void main_one(int x, int y, t_main *main)
{
	main->lum->nx = 0;
	main->lum->ny = 0;
	main->lum->nz = 100;
	main->lum->x = -2700;
	main->lum->y = 2000;
	main->lum->z = 4000;
	main->eye->vx = 100;
	main->eye->vy = (WIDTH / 2) - x;
	main->eye->vz = (HEIGHT / 2) - y;
	main->eye->xeye = -500;
	main->eye->yeye = 0;
	main->eye->zeye = 0;
	main->sphere->x = main->eye->vx + SPHERE_X;
	main->sphere->y = main->eye->vy + SPHERE_Y;
	main->sphere->z = main->eye->vz + SPHERE_Z;
	main->sphere->rayon = 400;
}

void main_second(int x, int y, t_main *main)
{
	main->lum->nx = 0;
	main->lum->ny = 0;
	main->lum->nz = 100;
	main->lum->x = -2700;
	main->lum->y = 0;
	main->lum->z = 0;
	main->eye->vx = 100;
	main->eye->vy = (WIDTH / 2) - x;
	main->eye->vz = (HEIGHT / 2) - y;
	main->eye->xeye = -500;
	main->eye->yeye = 0;
	main->eye->zeye = 0;
	main->cone->x = main->eye->vx + CONE_X;
	main->cone->y = main->eye->vy + CONE_Y;
	main->cone->z = main->eye->vz + CONE_Z;
}

void what_main(int x, int y, t_main *main)
{
	main->lum->nx = 0;
	main->lum->ny = 0;
	main->lum->nz = 100;
	main->lum->x = -3000;
	main->lum->y = 2000;
	main->lum->z = 2000;
	main->eye->vx = 0;
	main->eye->vy = (WIDTH / 2) - x;
	main->eye->vz = (HEIGHT / 2) - y;
	main->eye->xeye = -4000;
	main->eye->yeye = (WIDTH / 2) - x;
	main->eye->zeye = 300;
	main->sphere->x = main->eye->vx + 1000 - 400;
	main->sphere->y = main->eye->vy + 0;
	main->sphere->z = main->eye->vz - 200;
	main->sphere->rayon = 800;
}

void	my_give_v(double *v_value, t_main *main)
{
	v_value[0] = main->plan->v;
	v_value[1] = main->cone->v;
	v_value[2] = main->cyl->v;
	v_value[3] = main->sphere->v;
}

void	give_shadow_sphere(t_main *main, double v)
{
	main->sphere->xp = main->eye->xeye + (main->sphere->x * v);
	main->sphere->yp = main->eye->yeye + (main->sphere->y * v);
	main->sphere->zp = main->eye->zeye + (main->sphere->z * v);
	main->lum->vx = main->lum->x - main->sphere->xp;
	main->lum->vy = main->lum->y - main->sphere->yp;
	main->lum->vz = main->lum->z - main->sphere->zp;
}

void	give_shadow_cyl(t_main *main, double v)
{
	main->cyl->xp = main->eye->xeye + (main->cyl->x * v);
	main->cyl->yp = main->eye->yeye + (main->cyl->y * v);
	main->lum->vx = main->lum->x - main->cyl->xp;
	main->lum->vy = main->lum->y - main->cyl->yp;
}

void	give_shadow_cone(t_main *main, double v)
{
	main->cone->xp = main->eye->xeye + (main->cone->x * v);
	main->cone->yp = main->eye->yeye + (main->cone->y * v);
	main->cone->zp = main->eye->zeye + (main->cone->z * v);
	main->lum->vx = main->lum->x - main->cone->xp;
	main->lum->vy = main->lum->y - main->cone->yp;
	main->lum->vz = main->lum->z - main->cone->zp;
}
