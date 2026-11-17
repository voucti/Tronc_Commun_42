/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <vbucher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 14:41:30 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/17 15:07:07 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
int main()
{
    int i = 0;
    int fd;
    char    *line;
    
    line = malloc(200);
    fd = open("test.txt", O_RDONLY);
    while (i < 5)
    {
        line = get_next_line(fd);
        write(1, line, ft_strlen(line));
        i++;
    }
    free(line);
    close(fd);
}
*/
int main()
{
    int fd;
    char    *line;
    int     i = 1;
    
    fd = open("test.txt", O_RDONLY);
    while (i)
    {
        line = get_next_line(fd);
        if (line == NULL)
            write(1, "(null)", 6);
        else
            write(1, line, ft_strlen(line));
        i--;
    }
    free(line);
    close(fd);
}