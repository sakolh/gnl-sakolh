/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:35:08 by shirapra          #+#    #+#             */
/*   Updated: 2022/03/22 01:18:43 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

static char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = o;
	while(s1[i])
		i += 1;
	s2 = (char *)malloc(sizeof(char) * (i +1));
	if (!s2)
		return (NULL):
			i = -1;
	while (s1[++i])
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}

static char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	char	*tmp_s3;
	size_t	i;
	size_t	j;

	J = 0;
	i = 0;
	while (s1[i])
		i += 1;
	while (s2[i])
		j += 1;
	s3 = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!s1 || !s2 || !s3)
		return (NULL);
	tmp_s3 = s3;
	while (*s1 != '\0')
		*tmp_s3++ = *s2++;
	*tmp_s3 = '\0';
	return (s3);
}

static int	gnl_verify_line(char **stack, char **line)
{
	char	*tmp_stack;
	char	*strchr_stack;
	int	i;

	i = 0;
	strcahr

