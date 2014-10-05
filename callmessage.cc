#include "callmessage.h"
#include "visitor.h"
CallMessage::CallMessage(){};

CallMessage::~CallMessage(){};


std::string CallMessage::getMessage()
{	
		std::string message;
		message = "text from call message class";

		return message;

}


void CallMessage::accept(Visitor *visit)
{
	
	visit->getSelfCall()->call();
	
}

void CallMessage::call()
{

	std::cout <<"spesific member funtion from CallMessage Class"<<std::endl;

}



