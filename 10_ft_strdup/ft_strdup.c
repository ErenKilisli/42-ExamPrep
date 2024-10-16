/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:00:30 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/21 18:09:22 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strdup(char *src)

{
	int		srclen;
	int		i;
	char	*retrn;

	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	retrn = (char *)malloc((srclen + 1) * sizeof(char));
	if (retrn == NULL)
	{
		return (NULL);
	}
	i  = 0;
	while (src[i] != '\0')
	{
		retrn[i] = src[i];
		i++;
	}
	retrn[i] = '\0';
	return (retrn);
}