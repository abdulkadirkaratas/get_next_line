/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:05:48 by akaratas          #+#    #+#             */
/*   Updated: 2024/01/04 20:42:26 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	size_t	s1_len;
	char	*new_str;

	s1_len = ft_strlen(s1);
	new_str = (char *)malloc((s1_len + 1));
	if (new_str == 0)
		return (0);
	ft_memcpy(new_str, s1, (s1_len + 1));
	return (new_str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	total_len;
	char	*newstr;

	if (!s1)
		s1 = ft_strdup("");
	if (!s1 || !s2)
		return (0);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc(total_len + 1);
	if (newstr == 0)
		return (0);
	ft_memcpy(newstr, s1, ft_strlen(s1));
	ft_memcpy(&(newstr[ft_strlen(s1)]), s2, ft_strlen(s2));
	newstr[total_len] = '\0';
	free(s1);
	return (newstr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s == 0)
		return (0);
	if ((start >= ft_strlen(s)))
		return (NULL);
	if (len > (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);
	substr = (char *)malloc(len + 1);
	if (substr == 0)
		return (0);
	ft_memcpy(substr, &(s[start]), len);
	substr[len] = '\0';
	return (substr);
}
