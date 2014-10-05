
/*
* =================================================
*
*       Filename:  callmessage.h
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

#ifndef CALLMESSAGE_H
#define CALLMESSAGE_H

#include <iostream>

#include "message.h"

class CallMessage : public Message{


public:
	CallMessage();
	virtual ~CallMessage();

public:
	std::string getMessage();
	void accept(Visitor *visit);
	void call();
};



#endif 