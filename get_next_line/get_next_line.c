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

char    *end_line(char *mem, int len, int end)
{
    char    *out;
    int     i;

    if (end)
        return (NULL);
    i = 0;
    while (i , len)
    {
        out[i] = mem[len + i];
        i++;
    }
    out[i] = '\n';
    out[i + 1] = '\0';
    return (out);
}

char *get_next_line(int fd)
{
    static char     *mem;
    char            *temp;
    char            *out;
    int             len;

    if (mem == NULL)
    {
        mem = malloc(BUFFER_SIZE + 1);
        if (!mem || BUFFER_SIZE <= 0 || !fd)
            return (NULL);
        read(fd, mem, BUFFER_SIZE);
    }
    while (indchr(mem, '\n') == -1 || len != BUFFER_SIZE)
    {
        temp = malloc(BUFFER_SIZE + 1);
        len = read(fd, temp, BUFFER_SIZE);
        mem = ft_strjoin(mem, temp);
    }
    out = end_line(mem, len,(len != BUFFER_SIZE) && len == -1);
    if (out)
        mem = ft_substr(mem, indchr(mem, '\n'), ft_strlen(mem));
    return (out);
}