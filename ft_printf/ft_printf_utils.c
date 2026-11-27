/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <vbucher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 13:38:45 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/27 18:34:50 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_putchar(char c, int *count)
{
    *count += write (1, &c, 1);
}

void	ft_putstr(char *s, int *count)
{
	int i;
    
    i = -1;
    while (i++, s[i])
        ft_putchar(s[i], count);
}

void	ft_putnbr(int n, int *count)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putstr("-", count);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10, count);
	ft_putchar(((nb % 10) + 48), count);
}

void    putadr(uintptr_t n, int *count)
{
    char    *out;
    int     i;
    int     j;

    out = malloc(17);
    i = 0;
    if (n == 0)
    {
        ft_putstr("(nil)", count);
        free(out);
        return ;
    }
    ft_putstr("0x", count);
    while (n > 0)
    {
        out[i++] = BASE_L[n % 16];
        n /= 16;
    }
    j = 16 - i;
    while (j--)
        ft_putchar('0', count);
    while (i)
        ft_putchar(out[--i], count);
    free(out);
}

void    puthexa(uintptr_t n, int mode, int *count)
{
    char    *out;
    int     i;

    out = malloc(9);
    i = 0;
    if (n == 0)
    {
        ft_putchar('0', count);
        free(out);
        return ;
    }
    while (n > 0)
    {
        if (mode == 1)
            out[i++] = BASE_L[n % 16];
        else
            out[i++] = BASE_U[n % 16];
        n /= 16;
    }
    while (i)
        ft_putchar(out[--i], count);
    free(out);
}