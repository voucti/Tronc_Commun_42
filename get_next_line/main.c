/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <vbucher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 14:41:30 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/16 16:26:12 by vbucher          ###   ########.fr       */
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
    
    fd = open("test.txt", O_RDONLY);
    line = get_next_line(fd);
    write(1, line, ft_strlen(line));
    free(line);
    close(fd);
}