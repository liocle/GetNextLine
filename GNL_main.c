/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GNL_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:54:23 by lclerc            #+#    #+#             */
/*   Updated: 2023/02/01 15:20:06 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("bible.txt", O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		if (line == NULL)
			break;
		free(line);
	}
	return (0);
}
