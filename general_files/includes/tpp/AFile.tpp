/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AFile.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:24:37 by chhoflac          #+#    #+#             */
/*   Updated: 2025/07/04 17:21:59 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Abstracts/AFile.hpp"

template <typename T>
AFile<T>::AFile(const std::string name, const std::string extension)
	: name(name),
	extension(extension){
	
}
template <typename T>
AFile<T>::AFile(const std::string name, const std::string extension, int nbLines)
	: name(name),
	extension(extension),
	totalLines(nbLines){
	
}
template <typename T>
AFile<T>::AFile(const std::string name, const std::string extension, int good, int bad, int predefined)
	: name(name),
	extension(extension),
	goodLines(good),
	badLines(bad),
	predefinedLines(predefined),
	totalLines(good + bad + predefined){
		
}
template <typename T>
AFile<T>::AFile(const AFile &src)
	: name(src.getName()),
	extension(src.getExtension()),
	goodLines(src.getGoodLines()),
	badLines(src.getBadLines()),
	predefinedLines(src.getPredifinedLines()),
	totalLines(src.getTotalLines()){
	
}
template <typename T>
AFile<T>::~AFile(){
	typename std::map <int , ILine *>::iterator i = this->content.begin();
	while (i != this->content.end()){
		delete i->second;
		i = content.erase(i);
	}
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

