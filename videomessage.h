/*
* =================================================
*
*       Filename:  videomessage.h
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

#ifndef VIDEOMESSAGE_H
#define VIDEOMESSAGE_H

#include "message.h"


class VideoMessage : public Message 
{
	public:
		VideoMessage();
		virtual ~VideoMessage();
	public:
		std::string getMessage();
		void accept(Visitor *visit);
		void video();

};

#endif 
