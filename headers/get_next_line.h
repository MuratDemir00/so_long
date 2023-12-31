/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murdemir <murdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:11:37 by murdemir          #+#    #+#             */
/*   Updated: 2023/07/14 16:53:08 by murdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

char	*get_next_line(int fd);
char	*ft_get_str(int fd, char *s);
char	*ft_get_new_str(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_get_line(char *s);
int		ft_strlen(char *s);
int		ft_strchr(char *s, int c);

#endif
