#include "PartBuilder.h"
#include "CADObject.h"



AutomationAPI::CADObject* AutomationAPI::PartBuilder::Commit()
{
	return nullptr;
}

void AutomationAPI::PartBuilder::SetType(PartBuilderTypes type)
{
}

AutomationAPI::PartBuilder::PartBuilderTypes AutomationAPI::PartBuilder::GetType()
{
	return AutomationAPI::PartBuilder::TypesCircumference;
}

void AutomationAPI::PartBuilder::SetRadius(int h)
{
}

int AutomationAPI::PartBuilder::GetRadius()
{
	return 0;
}

void AutomationAPI::PartBuilder::SetCircumference(int w)
{
}

int AutomationAPI::PartBuilder::GetCircumference()
{
	return 0;
}


int AutomationAPI::PartBuilder::GetSurfaceArea()
{
	return 0;
}

int AutomationAPI::PartBuilder::GetVolume()
{
	return 0;
}

void AutomationAPI::PartBuilder::SetOrigin(int x, int y, int z)
{
}

void AutomationAPI::PartBuilder::GetOrigin(int& x, int& y, int& z)
{
}
