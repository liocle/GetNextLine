/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:28:43 by lclerc            #+#    #+#             */
/*   Updated: 2023/01/12 18:08:52 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *s)
{
	char	*p;

	p = (char *)s;
	while (*p != '\0')
		p++;
	return (p - s);
}

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*p)
	{
		if (*p == (char)c)
			return (p);
		p++;
	}
	if ((*p == '\0') && (*p == c))
		return (p);
	return (0);
}


char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_string;
	size_t	joined_string_length;

	if (!s1 || !s2)
		return (NULL);
	joined_string_length = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined_string = (char *)malloc(joined_string_length * sizeof(char) + 1);
	if (joined_string == NULL)
		return (NULL);
	ft_strlcpy(joined_string, s1, joined_string_length);
	ft_strlcat(joined_string, s2, joined_string_length);
	return (joined_string);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;
	size_t	dst_length;
	size_t	i;

	i = 0;
	src_length = ft_strlen(src);
	dst_length = 0;
	if (dst)
		dst_length = ft_strlen(dst);
	if (dst_length >= dstsize)
		return (dstsize + src_length);
	while (dst_length + i < dstsize - 1 && src[i] != '\0')
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	dst[dst_length + i] = '\0';
	return (dst_length + src_length);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (i < dstsize - 1 && src[i] != '\0')
	{
			dst[i] = src[i];
			i++;
	}
	dst[i] = '\0';
	return (len);
}
