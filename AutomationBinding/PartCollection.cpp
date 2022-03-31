#include "PartCollection.h"
#include "Part.h"
#include "PartBuilder.h"
#include <iostream>

AutomationAPI::PartCollection::PartCollection(int guid) : m_guid(guid)
{

}

AutomationAPI::PartCollection::~PartCollection()
{

}

AutomationAPI::PartBuilder* AutomationAPI::PartCollection::CreatePartBuilder(AutomationAPI::Part* part)
{
	if (part == nullptr)
	{
		std::cout << "Part is creation mode" << std::endl;
	}
	else
	{
		std::cout << "Part is edit/query mode" << std::endl;
	}


	return nullptr;

}
