/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:34:48 by shirapra          #+#    #+#             */
/*   Updated: 2022/03/22 00:29:21 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	GET_NEXT_LINE_H
#	define	GET_NEXT_LINE_H
#	define	BUFF_SIZE 8
#	define	MAX_FD 1024 + 1
#	define	RET_VALUE(ret) ret > 0 ? 1 : ret

#	include	<stdio.h>
#	include <stdlib.h>

int	get_next_line(const int fd, char **line);

#endif
