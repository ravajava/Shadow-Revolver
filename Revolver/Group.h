#pragma once
#include "Constants.h"
#include "Character.h"
class CGroup
{
public:
	CGroup();
	virtual ~CGroup();

	// getters

	virtual int getUnitSize() = 0;
	virtual int getTier() = 0;
	virtual FOCUS getFocus() = 0;

	virtual float getAttack() = 0;
	virtual float getDefence() = 0;

	virtual bool isEntrenched();

	// setters
	virtual void setUnitSize(int unitSize) = 0;
	virtual void setTier(int tier) = 0;
	virtual void setFocus(FOCUS focus) = 0;
	virtual void setAttack(float attack) = 0;
	virtual void setDefence(float defence) = 0;

	virtual void setEntrenched(bool entrenched) = 0;
	

private:
	int m_UnitSize;
	int m_Tier;
	FOCUS m_Focus;
	float m_Attack;
	float m_Defence;
	bool m_Entrenched;

};

