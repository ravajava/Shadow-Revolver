#pragma once
#include "Constants.h"

#include <string>
class CCharacter
{
public:
	CCharacter();
	~CCharacter();
	// setters
	// core stats
	void setName(std::string name);
	void setLevel(float level);
	void setAttackModify(float attackModify);
	void setDefenceModify(float defenceModify);
	void setHealth(float Health);

	// Constant Stats
	void setFaction(FACTIONS faction);
	void setBreakAway(FACTIONS_BREAKAWAY breakAway);
	void setRegion(REGION region);
	void setReligion(RELIGION religion);
	void setWeapon(WEAPON weapon);
	
	//getters
	
	float getLevel();
	float getAttackModify();
	float getDefenceModify();
	float getHealth();


	std::string getName();
	FACTIONS getFaction();
	FACTIONS_BREAKAWAY getBreakAway();
	REGION getRegion();
	RELIGION getReligion();
	WEAPON getWeapon();

private:

	std::string m_Name;
	float m_Level;
	float m_AttackModify;
	float m_DefenceModify;
	float m_HealthModify;

	FACTIONS m_Faction;
	FACTIONS_BREAKAWAY m_BreakAway;
	REGION m_Region;
	RELIGION m_Religion;
	WEAPON m_Weapon;

	//Faction* playerFaction();

};

