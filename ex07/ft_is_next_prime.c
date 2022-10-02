/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_next_prime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 08:39:32 by tpotilli          #+#    #+#             */
/*   Updated: 2022/10/02 08:41:16 by tpotilli         ###   ########.fr       */
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
        if (nb > 1000000 && i > 1000)
            return (1);
        i++;
    }
    if (i == nb)
        return (1);
    return (0);
}

int ft_find_next_prime(int nb)
{
    int i;;
    
    i = 0;
    while (!ft_is_prime(nb + i))
        i++;
    return (nb + i);
}