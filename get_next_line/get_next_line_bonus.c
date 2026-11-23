/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <vbucher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 16:13:18 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/23 16:19:35 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char    *error(char *mem, char *temp)
{
    if (mem)
        free(mem);
    if (temp)
        free(temp);
    return (NULL);
}

char *get_next_line(int fd)
{
    static char     **mem;
    char            *temp;
    int             len;
    char            *out;

    len = 1;
    if (mem[fd] == NULL)
        mem[fd] = malloc(BUFFER_SIZE + 1);
    while (indchr(mem[fd], '\n') == -1 && len != 0)
    {
        temp = malloc(BUFFER_SIZE + 1);
        if (!temp || !mem[fd] || fd < 0)
            return(error(mem[fd], temp));
        len = read(fd, temp, BUFFER_SIZE);
        temp [len] = '\0';
        mem[fd] = ft_strjoin(mem[fd], temp);
    }
    out = ft_substr(mem, 0, ((indchr(mem[fd], '\n') != -1) * (indchr(mem[fd], 
        '\n') + 1)) + ((indchr(mem[fd], '\n') == -1) * ft_strlen(mem[fd])), 0);
    mem[fd] = ft_substr(mem, indchr(mem[fd], '\n') + 1, ft_strlen(mem[fd])
        - indchr(mem[fd], '\n'), 1);
    if (temp[0] == '\0')
        return (free(mem[fd]), NULL);
    return (out);
}