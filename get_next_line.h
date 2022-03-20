/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:34:48 by shirapra          #+#    #+#             */
/*   Updated: 2022/03/20 23:25:46 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	GET_NEXT_LINE_H
#	define	GET_NEXT_LINE_H
#	define	BUFF_SIZE 8
#	define	FD_SIZE 4096

#	include	<stdio.h>
#	include <stdlib.h>
#	include	<fcnltl.h>
#	include <sys/types.h>
#       include <sys/uioh>
#	include	<unistd.h>
#	include	"libft/libft.h"

int	get_next_line(const int fd, char **line);

#endif
