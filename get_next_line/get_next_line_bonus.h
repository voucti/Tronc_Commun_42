/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <vbucher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 16:13:10 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/23 16:13:13 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int	indchr(const char *s, int c);
char	*ft_substr(char *s, int start, int len, int mode);
void	*ft_memcpy(void *dest, const void *src, int n);
int ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
char *get_next_line(int fd);

#endif