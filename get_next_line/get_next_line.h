/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <vbucher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:19:43 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/16 16:24:27 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 4
#endif

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_substr(char *s, unsigned int start, size_t len);
int	indchr(const char *s, int c);
int ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char *get_next_line(int fd);

#endif