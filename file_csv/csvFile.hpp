/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   csvFile.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 10:41:21 by chhoflac          #+#    #+#             */
/*   Updated: 2025/08/02 11:29:51 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <filegen.hpp>

template <typename T>
class csvFile : public AFile<T>{
	private :
		size_t	nbColumns;
		char	seperator;
	public :
		csvFile();
		csvFile(const std::string &name, const std::string &extension);
		csvFile(const size_t s, char separator);
};