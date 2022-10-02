/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 08:37:41 by tpotilli          #+#    #+#             */
/*   Updated: 2022/10/02 08:38:49 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int i;
    
    if (nb <= 1)
        return (0);
    i = 2;
    while (nb % i != 0)
    {
        i++;
    }
    if (i == nb)
        return (1);
    return (0);
}