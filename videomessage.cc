#include <iostream>

#include "videomessage.h"
#include "visitor.h"

VideoMessage::VideoMessage(){};

VideoMessage::~VideoMessage(){};


std::string VideoMessage::getMessage()
{

		std::string message;
		message = "text from VideoMessage class";

		return message;
	
}

void VideoMessage::accept(Visitor *visit)
{
	
	visit->getSelfMsg()->video();
}

void VideoMessage::video()
{

	std::cout<<"spesific member function from VideoMessage class"<<std::endl;
}