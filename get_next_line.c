/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:26:47 by lclerc            #+#    #+#             */
/*   Updated: 2023/01/12 18:08:55 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The get_next_line() let a text file be read by the file descriptor (standard
 * input and file), one line at a time in a loop.
 * 
 * The function returns the line that was read, unless there is nothing else to
 * read or if an error occur, in which case NULL is returned.
 * 
 * Returned line should include '\n' except if the end of file was reached and
 * does not end with a '\n'.
 *
 * External functions allowed: read, malloc, free.
 *
 * All helper functions must be included into get_next_line_utils.c
 *
 * Static variables are recommended to be used.
 *
 * Compiler call must use '-D BUFFER_SIZE=n' in order to define the buffer size
 * for read(). The project must be able to compile with and without '-D
 * BUFFER_SIZE' option with a default value of your choice.
 *
 * Example: cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c 
 * 
 * BUFFER_SIZE is defined in get_next_line.h. If the -D flag is used at compile
 * time, it will override this value.
 *
 * The read() returns the number of bytes read and placed in the buffer. '0' is
 * returned when EOF is reached and '-1' in case of error.
 *
 * Undefined behaviours happen:
 * 	- if the file pointed to by fd changed since the last call whereas read()
 * 	didnt reach EOF.
 *	- if reading a binary file. 
 *
 * From man getline(3), an entire line is read from stream, storing the address
 * of the buffer containing the text into a *line_pointer. The buffer is
 * null-terminated and includes the newline character if present.
 *
 */

#include "get_next_line.h"

static void	print_line(char *line_buffer, char bookmark)
{
	char	*
	ft_strlcpy(		
}

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*line_buffer;
	char		*bookmark;
	size_t		read_bits;	

	buffer = (char *)malloc(BUFFER_SIZE * sizeof(char) + 1);
	line_buffer = (char *)malloc(1 * sizeof(char) + 1); 
	if (read_bits = read(fd, buffer, BUFFER_SIZE) < 0)
		return (NULL);
	while (read_bits > 0)
	{
		line_buffer = (char *)malloc((BUFFER_SIZE + ft_strlen(line_buffer)) * \
				sizeof(char) + 1);
		ft_strjoin(line_buffer, buffer);
		bookmark = ft_strchr(line_buffer, '\n';
		if (bookmark != NULL && bookmark != '\0')
		{
			print_line(line_buffer);
			trim_printed(line_buffer, bookmark);
		}
		read_bits = read(fd, buffer, BUFFER_SIZE)
	}
	free(line_buffer);
	free(buffer);

}
