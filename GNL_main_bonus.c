/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GNL_main_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:44:59 by lclerc            #+#    #+#             */
/*   Updated: 2023/02/02 11:18:11 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd1;
	int		fd2;
	int		fd3;
	int		i;

	fd1 = open("ULYSSES_JOYCE.txt", O_RDONLY);
	fd2 = open("Odyssey.txt", O_RDONLY);
	fd3 = open("Germinal.txt", O_RDONLY);
	i = 0;
	while (i < 8304)
	{
		
		printf("fd1\t%s\n", get_next_line(fd1));
		printf("fd1\t%s\n", get_next_line(fd1));
		printf("fd1\t%s\n", get_next_line(fd1));
		printf("fd1\t%s\n", get_next_line(fd1));
		printf("          __________         __________         __________\n");
		printf("fd2\t%s\n", get_next_line(fd2));
		printf("fd2\t%s\n", get_next_line(fd2));
		printf("          __________         __________         __________\n");
		printf("fd3\t%s\n", get_next_line(fd3));
		printf("fd3\t%s\n", get_next_line(fd3));
		printf("fd3\t%s\n", get_next_line(fd3));
		printf("fd3\t%s\n", get_next_line(fd3));
		printf("          __________         __________         __________\n");
		i++;	
	}
	return (0);
}
