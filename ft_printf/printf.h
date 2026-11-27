/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <vbucher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 12:53:54 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/27 18:28:27 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>

# define BASE_L "0123456789abcdef"
# define BASE_U "0123456789ABCDEF"

int     ft_printf(const char *, ...);
void    ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putnbr(int n, int *count);
void    puthexa(uintptr_t n, int mode, int *count);
void    putadr(uintptr_t n, int *count);

#endif
