#pragma once
#include "AutomationBindingExports.h"
namespace AutomationAPI
{
	class PartBuilder;
	class Part;
	/** <summary>
	  PartCollection is used by the Automation API to create a part builder
	</summary> */

	/** <remarks>
		This creates a part builder which is capable of creating spherical parts. Expect this to be expanded to other part types in the future.
		To start the part builder you must provide a pointer to a part, or a nullptr.
	 </remarks> */
	class AUTOMATIONBINDING_API PartCollection
	{
	public:
		PartCollection(int guid);

		virtual ~PartCollection();

		PartBuilder* CreatePartBuilder(Part* part);


	private:
		int m_guid;
	};
}
