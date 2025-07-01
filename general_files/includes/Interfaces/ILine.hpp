/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ILine.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:03:35 by chhoflac          #+#    #+#             */
/*   Updated: 2025/07/01 13:48:13 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class ILine{
	public:
		virtual ~ILine();
		
		virtual void	printOnFile() const = 0;
		virtual ILine	*duplicate() const = 0;	
};