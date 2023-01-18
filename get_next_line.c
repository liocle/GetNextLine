/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:26:47 by lclerc            #+#    #+#             */
/*   Updated: 2023/01/18 10:15:07 by lclerc           ###   ########.fr       */
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
 * LIMITATIONS:
 * BUF_SIZE must be at least 1.
 * fd is limited to 1024 (or as defined by FD_SETSIZE) else it will result in
 * undefined behaviour.
 */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		buffer[BUFFER_SIZE + 1];
	static char	*line_buffer;
	char		*bookmark;
	char		*new_line;
	int			read_value;	
	int			len;

	if(fd < 0 || BUFFER_SIZE <= 0 || fd > 1023)
		return (NULL);
	read_value = BUFFER_SIZE;
	line_buffer = NULL;
	bookmark = NULL;
	new_line = NULL;
	while (read_value > 0)
	{
		read_value = read(fd, buffer, BUFFER_SIZE);
		buffer[read_value] = '\0';
		line_buffer = ft_strjoin(bookmark, buffer);
		bookmark = ft_strchr(line_buffer, '\n');
		if (bookmark != NULL)
		{
			new_line = (char *)malloc((bookmark - line_buffer) * sizeof(char) +1);
			if (!new_line)
				return (NULL);
			ft_strlcpy(*new_line, *line_buffer, bookmark - line_buffer);
			return (new_line);
		}
	}
	if read_value 


		


}
