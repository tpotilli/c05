/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:42:38 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/28 16:53:45 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_rec_recursive(int nb)
{
    if(nb == 1)
        return (1);
    else if(nb == 0)
        return (0);
    return ( nb * ft_iterative_recursivel(nb - 1));
    
}

int main()
{
    printf("%d",ft_iterative_recursivel(6));
}