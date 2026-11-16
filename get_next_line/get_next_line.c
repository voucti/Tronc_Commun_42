/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <vbucher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:18:42 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/16 16:42:36 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char     *mem;
    char            *temp;
    
    if (BUFFER_SIZE <= 0)
        return (NULL);
    if (!mem)
    {
        mem = malloc(BUFFER_SIZE + 1);
        read(fd, mem, BUFFER_SIZE);
    }
    else
    {
        while (mem[ft_strlen(mem)] != '\n')
        temp = malloc(BUFFER_SIZE + 1);
        read (fd, temp, BUFFER_SIZE);
        mem = ft_strjoin(mem, temp);
    }
    return (mem);
}