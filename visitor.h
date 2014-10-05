/*
* =================================================
*
*       Filename:  visitor.h
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
#ifndef VISITOR_H
#define VISITOR_H


class CallMessage;
class VideoMessage;

class Visitor
{
public:
	Visitor();
	~Visitor();
public:

	CallMessage* getSelfCall();
	VideoMessage* getSelfMsg();

	CallMessage *callMessage;
	VideoMessage *videoMessage;
	
};

#endif 