#pragma once
#include "AutomationBindingExports.h"
#include "IBuilder.h"

namespace AutomationAPI
{
	class CADObject;


	/** <summary>
	  PartBuilder is used by the Automation API to create spherical parts.
	</summary> */

	/** <remarks>
		This part builder creates spherical parts either by using a given radius, or by using a given circumference. Once the part is created you can
		change the part using SetRadius, SetOrigin, or SetCircumference. To get info about the part you can use GetRadius, GetOrigin, GetCircumference, GetSurfaceArea, or
		GetVolume.
	 </remarks> */
	class AUTOMATIONBINDING_API PartBuilder : public IBuilder
	{
	public:
		enum PartBuilderTypes
		{
			TypesRadius, /**Represents the part created by providing radius. */
			TypesCircumference /**Represents the part created by providing circumference.*/
		};

		void SetType(PartBuilderTypes type);
		PartBuilderTypes GetType();

		void SetRadius(int h);
		int GetRadius();
		void SetCircumference(int w);
		int GetCircumference();
		int GetSurfaceArea();
		int GetVolume();
		void SetOrigin(int x, int y, int z);
		void GetOrigin(int& x, int& y, int& z);


		CADObject* Commit() override;
	private:


	};
}
