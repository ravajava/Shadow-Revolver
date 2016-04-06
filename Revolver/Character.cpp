#include "Character.h"


CCharacter::CCharacter()


{

	// playerFaction = new Faction();
	m_Level = 0.0f;
	m_AttackModify = 0.0f;
	m_DefenceModify = 0.0f;
	m_HealthModify = 0.0f;

}


CCharacter::~CCharacter()
{
	

}

void CCharacter::setName(std::string name)
{
	m_Name = name;
}
void CCharacter::setLevel(float level)
{
	m_Level = level;
}
void CCharacter::setAttackModify(float attackModify)
{
	m_AttackModify = attackModify;
}
void CCharacter::setDefenceModify(float defenceModify)
{
	m_DefenceModify = defenceModify;
}
void CCharacter::setHealth(float Health)
{
	m_HealthModify = Health;
}

void CCharacter::setFaction(FACTIONS faction)
{
	m_Faction = faction;
}
void CCharacter::setBreakAway(FACTIONS_BREAKAWAY breakAway)
{
	m_BreakAway = breakAway;
}
void CCharacter::setRegion(REGION region)
{
	m_Region = region;
}
void CCharacter::setReligion(RELIGION religion)
{
	m_Religion = religion;
}
void CCharacter::setWeapon(WEAPON weapon)
{
	m_Weapon = weapon;
}

float CCharacter::getLevel()
{
	return m_Level;
}
float CCharacter::getAttackModify()
{
	return m_AttackModify;
}
float CCharacter::getDefenceModify()
{
	return m_DefenceModify;
}
float CCharacter::getHealth()
{
	return m_HealthModify;
}


std::string CCharacter::getName()
{
	return m_Name;
}
FACTIONS CCharacter::getFaction()
{
	return m_Faction;
}
FACTIONS_BREAKAWAY CCharacter::getBreakAway()
{
	return m_BreakAway;
}
REGION CCharacter::getRegion()
{
	return m_Region;
}
RELIGION CCharacter::getReligion()
{
	return m_Religion;
}
WEAPON CCharacter::getWeapon()
{
	return m_Weapon;
}