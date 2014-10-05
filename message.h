/*
* =================================================
*
*       Filename:  message.h
*
*    Description: Visitor Design pattern
*				 lets you define a new operation without 
*				 changing the classes of the elements on which it operates.
					
					by using interface and virtual method.
*
*        
*       
*       Revision:  none
*       Compiler:  gcc
*
*         Author:  Habibi Muhammad (Hb), galaksi102@gmail.com
*        Company:  palawija.com (under construction)
*
* =================================================
*/


#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>

class Visitor;
class Message
{

public:
	virtual ~Message(){};
	virtual std::string getMessage()=0;
	virtual void accept(Visitor *visit)=0;

	
};

#endif 