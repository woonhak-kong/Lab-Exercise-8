#include "Character.h"

Character::Character(string name, int hp, int attack):
    m_name(name),
    m_hp(hp),
    m_attack(attack)
{
}

void Character::setName(string name)
{
    m_name = name;
}

void Character::setHP(int hp)
{
    m_hp = hp;
}

void Character::setAttack(int attack)
{
    m_attack = attack;
}

string Character::getName()
{
    return m_name;
}

int Character::getHP()
{
    return m_hp;
}

int Character::getAttack()
{
    return m_attack;
}
