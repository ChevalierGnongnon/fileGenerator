/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GarbageCollector.tpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 12:32:05 by chhoflac          #+#    #+#             */
/*   Updated: 2025/08/03 12:50:55 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <filegen.hpp>

template <typename T>
std::vector <AFile <T>*>		&GarbageCollector<T>::getAFiles(){
    
}

template <typename T>
std::vector <Date *>			&GarbageCollector<T>::getDates(){
    
}
template <typename T>
std::vector <ILine *>			&GarbageCollector<T>::getLines(){
    
}
template <typename T>
std::vector <IWriter *>			&GarbageCollector<T>::getIWriters(){
    
}
template <typename T>
std::vector <IFileGenerator *>	&GarbageCollector<T>::getIFileGenerators(){
    
}
template <typename T>
std::vector <ILineGenerator *> 	&GarbageCollector<T>::getLineGenerators(){
    
}
template <typename T>
void							GarbageCollector<T>::registerAFile(AFile<T> *file){
    
}
template <typename T>
void							GarbageCollector<T>::registerDate(Date *date){
    
}
template <typename T>
void							GarbageCollector<T>::registerLine(ILine *line){
    
}
template <typename T>
void							GarbageCollector<T>::registerWriter(IWriter *writer){
    
}
template <typename T>
void							GarbageCollector<T>::registerFileGenerator(IFileGenerator *fileGenerator){
    
}
template <typename T>
void							GarbageCollector<T>::registerLineGenerator(ILineGenerator *lineGenerator){
    
}
template <typename T>
void							GarbageCollector<T>::clearAFiles(){
    
}
template <typename T>
void							GarbageCollector<T>::clearDates(){
    
}
template <typename T>
void							GarbageCollector<T>::clearLines(){
    
}
template <typename T>
void							GarbageCollector<T>::clearWriters(){
    
}
template <typename T>
void							GarbageCollector<T>::clearFileGenerator(){
    
}
template <typename T>
void							GarbageCollector<T>::clearLineGenerator(){
    
}
template <typename T>
void							GarbageCollector<T>::clearAll(){
    
}