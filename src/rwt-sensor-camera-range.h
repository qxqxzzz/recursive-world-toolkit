/* +---------------------------------------------------------------------------+
   |                       Recursive World Toolkit                             |
   |                                                                           |
   |   Copyright (C) 2011-2015  Jose Luis Blanco Claraco                       |
   |                                                                           |
   |      RWT is free software: you can redistribute it and/or modify          |
   |     it under the terms of the GNU General Public License as published by  |
   |     the Free Software Foundation, either version 3 of the License, or     |
   |     (at your option) any later version.                                   |
   |                                                                           |
   |    RWT is distributed in the hope that it will be useful,                 |
   |     but WITHOUT ANY WARRANTY; without even the implied warranty of        |
   |     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         |
   |     GNU General Public License for more details.                          |
   |                                                                           |
   |     You should have received a copy of the GNU General Public License     |
   |     along with  RWT.  If not, see <http://www.gnu.org/licenses/>.         |
   |                                                                           |
   +---------------------------------------------------------------------------+ */

#pragma once

#include "rwt-sensor-camera-common.h"

namespace rwt
{
	using namespace std;
	using namespace mrpt::utils;

	/** Sensor implementation: Camera with range data
	  */
	struct SensorSimul_CameraRange : public SensorSimul_CameraCommon
	{
		SensorSimul_CameraRange(const RWT_World & world, const RWT_SensorOptions & sensorParams) :
			SensorSimul_CameraCommon(
				world,
				sensorParams,
				true,  /* Has range */
				false  /* Isn't Stereo */
				)
		{
		}

		virtual void describeObservation(RWT_OutputOptions & outputParams)
		{
			outputParams.output_text_sensor <<
				"%                           PIXEL_X  PIXEL_Y RANGE(m)  \n"
				"% -------------------------------------------------------------------\n";
		}

	}; // end of SensorSimul_CameraRange

}
