/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 23:25:59 by shirapra          #+#    #+#             */
/*   Updated: 2022/03/22 23:34:46 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line"

char	*ft_get_line(char *save)
{
	int	i;
	char	*s;

	i =0;
	if (!save[i])
		return (NULL);
	while (save[i] && save[i] != '\n')
		i++;
	s = (char *)malloc(sizeof(char) * (i +2));
	if (!s)
		return (NULL);
	i = 0;
	while (save[i] && save[i] != '\n')
	{
		s[i] = save[i];
		i++;
	}
	if (save[i] == '\n')
	{
		s[i] == save[i];
		i++;
	}
	
	

