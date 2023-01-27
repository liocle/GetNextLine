/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:28:43 by lclerc            #+#    #+#             */
/*   Updated: 2023/01/27 17:52:09 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

size_t	ft_strlen(const char *s)
{
	char	*p;

	p = (char *)s;
	printf("\nstrlen\n");
	while (*p != '\0')
		p++;
	return (p - s);
}

size_t	ft_strchr_index(const char *s, int c)
{
	size_t		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (i);
		i++;
	}
	return (-1);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		s1_len;
	size_t		s2_len;
	size_t		index;
	char		*new_str;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = malloc((s1_len + s2_len) + 1);
	if (!new_str)
		return (NULL);
	index = 0;
	while (s1[index])
	{
		new_str[index] = s1[index];
		index++;
	}
	while (*s2 != '\0')
		new_str[index++] = *s2++;
	new_str[index] = '\0';
	return (new_str);
}
//char	*ft_strjoin(char const *s1, char const *s2)
//{
//	char	*joined_string;
//	size_t	joined_string_length;
//
//	if (!s1 || !s2)
//		return (NULL);
//	printf("\n\nEntering strjoin\n\n");
//	joined_string_length = ft_strlen(s1) + ft_strlen(s2) + 1;
//	printf("Joined string length :%zu:\n", joined_string_length);
//	joined_string = (char *)malloc(joined_string_length * sizeof(char) + 1);
//	if (joined_string == NULL)
//		return (NULL);
//	printf("s1:%s:\n", s1);
//	ft_strlcpy(joined_string, s1, joined_string_length);
//	printf("s1:%s: joined string is copied :%s:\n", s1, joined_string);
//	ft_strlcat(joined_string, s2, joined_string_length);
//	printf("s2:%s: joined string is concatenated :%s:\n", s2, joined_string);
//	return (joined_string);
//}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;
	size_t	dst_length;
	size_t	i;

	i = 0;
	// TODO: replace ft_strlen with BUFFER_SIZE?
	src_length = BUFFER_SIZE;
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
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_ptr;
	char	*src_ptr;
	int		i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	dst_ptr = (char *)dst;
	src_ptr = (char *)src;
	while (i < (int)n)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst);
}
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	if (src_len < dstsize)
		ft_memcpy(dst, src, src_len + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (src_len);
}
//size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
//{
//	size_t	len;
//	size_t	i;
//
//	i = 0;
//	printf("here in strlcpy\n ");
//	len = ft_strlen(src);
//	if (dstsize == 0)
//		return (len);
//	printf("\n\nBefore copying\n__dt_strlcpy, src:%s: src length:%zu:, dest:%s: dstsize:%zu:\n\n", src, len, dst, dstsize);
//	while (i < dstsize - 1 && src[i] != '\0')
//	{
//			printf("\n\nCopying\n__dt_strlcpy i:%zu:, src:%s: src length:%zu:, dest:%s: dstsize:%zu:\n\n", i, src, len, dst, dstsize);
//			dst[i] = src[i];
//			i++;
//	}
//	dst[i] = '\0';
//	printf("\n\nDone copying \n__dt_strlcpy i:%zu:, src:%s: src length:%zu:, dest:%s: dstsize:%zu:\n\n", i, src, len, dst, dstsize);
//	return (len);
//}
