/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GarbageCollector.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:10:42 by chhoflac          #+#    #+#             */
/*   Updated: 2025/08/03 15:19:37 by chhoflac         ###   ########.fr       */
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
		
		std::vector <IFile*>			&getAFiles();
		std::vector <Date *>			&getDates();
		std::vector <ILine *>			&getLines();
		std::vector <IWriter *>			&getIWriters();
		std::vector <IFileGenerator *>	&getIFileGenerators();
		std::vector <ILineGenerator *> 	&getLineGenerators();

		void							registerAFile(AFile<T> *file);
		void							registerDate(Date *date);
		void							registerLine(ILine *line);
		void							registerWriter(IWriter *writer);
		void							registerFileGenerator(IFileGenerator *fileGenerator);
		void							registerLineGenerator(ILineGenerator *lineGenerator);

		void							clearAFiles();
		void							clearDates();
		void							clearLines();
		void							clearWriters();
		void							clearFileGenerator();
		void							clearLineGenerator();

		void							clearAll();
};

#include "GarbageCollector.tpp"