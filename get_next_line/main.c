/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <vbucher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 14:41:30 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/23 15:28:25 by vbucher          ###   ########.fr       */
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
    char    c[2] = "a";
    int     len = 5;
    
    fd = open("test.txt", O_RDONLY);
    len = read(fd, c, 1);
    while(len != 0)
    {
        if(c[0] == '\n')
            i++;
        len = read(fd, c, 1);
    }
    close(fd);
    fd = open("test.txt", O_RDONLY);
    while (i)
    {
        line = get_next_line(fd);
        if (!line)
            write(1, "error", 5);
        else
            write(1, line, ft_strlen(line));
        i--;
    }
    free(line);
    close(fd);
}