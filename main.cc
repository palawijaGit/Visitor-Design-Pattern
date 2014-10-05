/*
* =================================================
*
*       Filename:  main.cc
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


#include "container.h"
#include "visitor.h" 
#include <stdio.h>

int main()
{
	Container *container = new Container();
	Visitor *visit = new Visitor();
	int size = container->getListSize();

	for(int x =0;x<size;x++)
	{
		container->getMessageType()->accept(visit);
		container->popUP();
	}

	delete visit;
	delete container;

	return 0;

}