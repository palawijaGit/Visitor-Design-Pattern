#include "visitor.h"
#include "callmessage.h"
#include "videomessage.h"

Visitor::Visitor()
{
	callMessage = new CallMessage();
	videoMessage = new VideoMessage();
 
}

Visitor::~Visitor()
{

}

CallMessage* Visitor::getSelfCall()
{
	return callMessage;
}


VideoMessage* Visitor::getSelfMsg()
{
	return videoMessage;
}