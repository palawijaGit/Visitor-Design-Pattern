#include "container.h"
#include <iostream>

#include "videomessage.h"
#include "callmessage.h"

Container::Container()
{

	for(int j=0; j<2; j++)
	{
		obj_callMessage = new CallMessage();
		obj_videoMessage = new VideoMessage();
			//input object into list
		listMsg.push_back(obj_callMessage);
		listMsg.push_back(obj_videoMessage);
	}
}


Container::~Container(){};

void Container::popUP()
{
	listMsg.pop_front();
}

int Container::getListSize()
{
	return listMsg.size();
}
	
Message* Container::getMessageType()
{
	return listMsg.front();

}