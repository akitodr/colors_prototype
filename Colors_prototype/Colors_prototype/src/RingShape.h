/******************************************************************************
 *
 * COPYRIGHT Vinicius G. Mendonca ALL RIGHTS RESERVED.
 *
 * This software cannot be copied, stored, distributed without
 * Vinicius G. Mendonca prior authorization.
 *
 * This file was made available on http://github.com/ViniGodoy and it is free
 * to be restributed or used under Creative Commons license 2.5 br:
 * http://creativecommons.org/licenses/by-sa/2.5/br/
 *
 *******************************************************************************
 * Este software nao pode ser copiado, armazenado, distribuido sem autorizacao
 * a priori de Vinicius G. Mendonca
 *
 * Este arquivo foi disponibilizado no site http://github.com/ViniGodoy e esta
 * livre para distribuicao seguindo a licenca Creative Commons 2.5 br:
 * http://creativecommons.org/licenses/by-sa/2.5/br/
 *
 ******************************************************************************/
#pragma once

#include "EmitterShape.h"

namespace particle
{
	namespace shape
	{
		class RingShape : public EmitterShape
		{
			private:
				bool filled;
				double semiMajorAxis;
				double semiMinorAxis;
				double angle;

			public:
				RingShape(bool filled, double _majorAxis, double _minorAxis, double _angle=0);
				RingShape(bool filled, double radius);

                virtual ofVec2f nextPosition(const ofVec2f& center) const;
				virtual void process(double secs);
				void setAngle(double angle);
				double getAngle() const;

				virtual ~RingShape();
		};
	}
}

