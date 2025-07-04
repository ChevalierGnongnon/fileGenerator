/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AFile.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:24:37 by chhoflac          #+#    #+#             */
/*   Updated: 2025/07/04 14:59:09 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Abstracts/AFile.hpp"

template <typename T>
AFile<T>::AFile(const std::string name, const std::string extension)
: 	name(name),
	extension(extension){
	
}
template <typename T>
AFile<T>::AFile(const std::string name, const std::string extension, int nbLines){
	
}
template <typename T>
AFile<T>::AFile(const std::string name, const std::string extension, int good, int bad, int predefined)
	: name(name),
	extension(extension),
	goodLines(good),
	badLines(bad),
	predefinedLines(predefined){
		
}
template <typename T>
AFile<T>::AFile(const AFile &src)
	: name(src.getName()),
	extension(src.getExtension),
	goodLines(src.getGoodLines()),
	badLines(src.getBadLines()),
	predefinedLines(src.getPredifinedLines()){
	
}
template <typename T>
AFile<T>::~AFile(){
	
}
template <typename T>
AFile<T> &AFile<T>::operator=(const AFile<T> &src){
	
}

template <typename T>
const std::map <int, ILine *>	&AFile<T>::getContent() const{
	return (this->content);
}
template <typename T>
const std::string				&AFile<T>::getName() const{
	return (this->name);
}
template <typename T>
const std::string				&AFile<T>::getExtension() const{
	return (this->extension);
}
template <typename T>
int								AFile<T>::getTotalLines() const{
	return (this->totalLines);
}
template <typename T>
int								AFile<T>::getGoodLines() const{
	return (this->goodLines);
}
template <typename T>
int								AFile<T>::getBadLines() const{
	return (this->badLines);
}
template <typename T>
int								AFile<T>::getPredefinedLines() const{
	return (this->predefinedLines);	
}
template <typename T>
void							AFile<T>::setTotalLines(int n){
	this->totalLines = n;
}
template <typename T>
void							AFile<T>::setGoodLines(int n){
	this->goodlines = n;
}
template <typename T>
void							AFile<T>::setBadLines(int n){
	this->badLines = n;
}
template <typename T>
void							AFile<T>::setPredefinedLines(int n){
	this->predefinedLines = n;	
}
template <typename T>
void							AFile<T>::addLines(const T &container){
	
}
