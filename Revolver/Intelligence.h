#pragma once
#include "Group.h"
class CIntelligence :
	public CGroup
{
public:
	CIntelligence();
	~CIntelligence();
private:
	int m_UnitSize;
	int m_Tier;
	FOCUS m_Focus;

	float m_Attack;
	float m_Defence;
};

