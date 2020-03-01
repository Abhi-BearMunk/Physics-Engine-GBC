#pragma once
#include "ECSConfig.h"




namespace Reality
{
	struct FloorCollideComponent
	{
		FloorCollideComponent(ECSEntity _A = ECSEntity(), ECSEntity _B = ECSEntity(), ECSEntity _C = ECSEntity())
			: A(_A), B(_B), C(_C)
		{
			
		}

		ECSEntity A;
		ECSEntity B;
		ECSEntity C;
	};
}
