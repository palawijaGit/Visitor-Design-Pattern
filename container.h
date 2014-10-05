/*
* =================================================
*
*       Filename:  container.h
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
#ifndef CONTAINER_H
#define CONTAINER_H

#include <list>

#include "message.h"
class Container
{

public:
	Container();
	~Container();
	
	void popUP();

	Message* getMessageType();

	int getListSize();

private:
	std::list<Message*> listMsg;

public:
	
	Message *obj_callMessage;
	Message *obj_videoMessage;

};


#endif 