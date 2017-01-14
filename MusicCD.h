/**
 * @file MusicCD.h
 * @Author eren (karaeren042@gmail.com)
 * @date December, 2016
 * @brief This file declares MusicCD 
 
 */ 
#ifndef MUSICCD_H_
#define MUSICCD_H_
#include <iostream>
#include "Product.h"
#pragma once
using namespace std;

class MusicCD:public Product {
private:
	string singer;
	string type;
public:
	MusicCD(int,string,double,string,string);
	MusicCD(int,string,double);
	virtual ~MusicCD();
	void printProperties();
	string getSinger() const;
	void setSinger(string);
	string getType() const;
	void setType(string);

};

#endif /* MUSICCD_H_ */
