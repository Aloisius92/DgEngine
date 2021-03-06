////////////////////////////////////////////////////////////////////////////////
// Filename: CapsuleCollider.h
////////////////////////////////////////////////////////////////////////////////

#pragma once

//////////////
// INCLUDES //
//////////////

///////////////////////
// MY CLASS INCLUDES //
///////////////////////
#include "Collider.h"

////////////////
// NAMESPACES //
////////////////


namespace dg {
	class CapsuleCollider : public Collider {
	public:
		CapsuleCollider();
		virtual ~CapsuleCollider();

		virtual void Initialize(const ColliderData&);
		virtual string GetType();

	private:
		PxReal				m_Radius;
		PxReal				m_Height;
		eGeometryDirection	m_Direction;
	};
}
