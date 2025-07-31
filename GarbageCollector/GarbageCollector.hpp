/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GarbageCollector.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:10:42 by chhoflac          #+#    #+#             */
/*   Updated: 2025/07/31 12:42:58 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <filegen.hpp>

template <typename T>
class GarbageCollector{
	private :
		std::vector<AFile<T> *> 		AFiles;
		std::vector<Date *>				Dates;
		std::vector<ILine *> 			Lines;
		std::vector<IWriter *>			Writers;
		std::vector<IFileGenerator *>	FileGenerators;
		std::vector<ILineGenerator *> 	LineGenerators;
		GarbageCollector(const GarbageCollector &src);
		GarbageCollector &operator=(const GarbageCollector &src);
	public :
		GarbageCollector();
		~GarbageCollector();
		
		std::vector <AFile <T>*>		&getAFiles();
		std::vector <Date *>			&getDates();
		std::vector <ILine *>			&getLines();
		std::vector <IWriter *>			&getIWriters();
		std::vector <IFileGenerator *>	&getIFileGenerators();
		std::vector <ILineGenerator *> 	&LineGenerators();

		
};