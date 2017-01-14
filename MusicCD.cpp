/**
 * @file MusicCD.cpp
 * @Author eren (karaeren042@gmail.com)
 * @date December, 2016
 * @brief This file implements MusicCD class functions
 */ 

#include "MusicCD.h"

string MusicCD::getSinger() const {
	return singer;
}

void MusicCD::setSinger(string){
	this->singer=singer;
}

string MusicCD::getType() const {
	return type;
}

void MusicCD::setType(string){
	this->type=type;
}
MusicCD::MusicCD(int id,string name ,double price, string singer,string type):Product(id,name,price) {
	this->singer=singer;
	this->type=type;
}
MusicCD::MusicCD(int id,string name ,double price):Product(id,name,price){

}

MusicCD::~MusicCD() {

}

void MusicCD::printProperties() {
	cout << "MusicCD Type: " << type << endl;
	cout << "MusicCD Singer: " << singer << endl;
}

//int id;
//string name;
//double price;
