/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 23:16:29 by shirapra          #+#    #+#             */
/*   Updated: 2022/03/22 23:24:53 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	GET_NEXT_LINE_H
#	define	GET_NEXT_LINE_H

#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen(char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
char	*ft_get_line(char *save);
char	*ft_save(char *save);
char	*ft_read_and_save(int fd, char *save);

#endif
