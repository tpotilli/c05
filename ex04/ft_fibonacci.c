/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:43:42 by tpotilli          #+#    #+#             */
/*   Updated: 2022/10/02 08:31:18 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    if (index < 0)
        return (0);
    if (index == 0)
        return (1);
    if (index > 1)
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
    printf("%d",ft_fibonacci(5));
}