/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GNL_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:54:23 by lclerc            #+#    #+#             */
/*   Updated: 2023/01/09 18:56:48 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*print_me;

	fd = open(print_me, O_RDONLY);
	while (1)
	{
		print_me = get_next_line(fd);
		if (print_me == NULL)
			return (-42);
		printf("%s", print_me);
		free (print_me);
	}
	return (0);
}
