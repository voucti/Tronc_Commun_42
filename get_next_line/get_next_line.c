/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <vbucher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:18:42 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/23 16:01:26 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
    static char     *mem;
    char            *temp;
    int             len;
    char            *out;

    len = 1;
    if (mem == NULL)
        mem = malloc(BUFFER_SIZE + 1);
    while (indchr(mem, '\n') == -1 && len != 0)
    {
        temp = malloc(BUFFER_SIZE + 1);
        if (!temp || !mem || fd < 0)
            return(error(mem, temp));
        len = read(fd, temp, BUFFER_SIZE);
        temp [len] = '\0';
        mem = ft_strjoin(mem, temp);
    }
    out = ft_substr(mem, 0, ((indchr(mem, '\n') != -1) * (indchr(mem, '\n') + 1))
        + ((indchr(mem, '\n') == -1) * ft_strlen(mem)), 0);
    mem = ft_substr(mem, indchr(mem, '\n') + 1, ft_strlen(mem)
        - indchr(mem, '\n'), 1);
    if (temp[0] == '\0')
        return (free(mem), NULL);
    return (out);
}