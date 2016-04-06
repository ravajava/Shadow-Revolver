#include "Group.h"


CGroup::CGroup()
{
	m_UnitSize = 0;
	m_Attack = 0.0f;
	m_Defence = 0.0f;
	m_Tier = 0;
	m_Entrenched = false;
}


CGroup::~CGroup()
{
}

void CGroup::setEntrenched(bool aEntrenched)
{
	m_Entrenched = aEntrenched;
}

bool CGroup::isEntrenched()
{
	return m_Entrenched;
}

int CGroup::getUnitSize()
{
	return m_UnitSize;
}
int CGroup::getTier()
{
	return m_Tier;
}
FOCUS CGroup::getFocus()
{
	return m_Focus;
}
float CGroup::getAttack()
{
	return m_Attack;
}
float CGroup::getDefence()
{
	return m_Defence;
}