/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaleil <hello@baptistechaleil.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 19:32:07 by bchaleil          #+#    #+#             */
/*   Updated: 2016/12/16 19:35:10 by bchaleil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	display_p(t_dlist *el)
{
	printf("[ %d, %d, %d ]\n", (int)CONTENT(x), (int)CONTENT(y), (int)CONTENT(z));
}

int	main(int ac, char **av)
{
	int fd;
	t_dlist	*map;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		map = parse_map(fd);
		ft_dlstiter(map, display_p);
	}
	/*
	t_fdf_data fdf_data;
	void	*win1;
	void	*img;

	if (!(fdf_data.mlx = mlx_init()))
	{
		ft_putendl("MLX INIT FAIL");
		exit(0);
	}
	if (!(win1 = mlx_new_window(fdf_data.mlx, WIDTH, HEIGHT,"fdf")))
	{
		ft_putendl("NEW WINDOW FAIL");
		exit(0);
	}
	if (!(img = mlx_new_image(fdf_data.mlx, WIDTH, HEIGHT)))
	{
		ft_putendl("NEW IMAGE FAIL");
		exit(0);
	}
	fdf_data.data = mlx_get_data_addr(img, &(fdf_data.bpp), &(fdf_data.sl), &(fdf_data.endian));
	drawline(fdf_data,0,100,400,400);
	drawline(fdf_data,0,0,10,100);
	mlx_put_image_to_window(fdf_data.mlx, win1, img, 0, 0);

	sleep(10);
	*/
	return (0);
}
