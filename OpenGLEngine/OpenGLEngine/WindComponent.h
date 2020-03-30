#pragma once
#include "ECSConfig.h"

namespace Reality
{
	struct WindComponent
	{
		WindComponent(ECSEntity _targetEntity = ECSEntity(),
			Vector3 _localWindDirection = Vector3(0, 0, 1),
			float _wind = 10, 
			Vector3 _sailPosition = Vector3(0,0,0))
			:targetEntity(_targetEntity),
			localWindDirection(_localWindDirection),
			wind(_wind),
			sailPosition(_sailPosition)
		{

		}
		ECSEntity targetEntity;
		Vector3 localWindDirection;
		float wind;
		float timer = 0;
		Vector3 sailPosition;
	};
}
