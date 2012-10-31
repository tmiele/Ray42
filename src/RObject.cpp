//
// RObject.cpp for Ray42 in /home/miele_t//Desktop/Ray42
// 
// Made by thomas miele
// Login   <miele_t@epitech.net>
// 
// Started on  Sat Oct  6 22:48:35 2012 thomas miele
// Last update Wed Oct 31 15:00:46 2012 thomas miele
//

#include "header/RObject.hpp"

RObject::RObject() : m_position(0, 0, 0), m_transform(), m_color(0xff000000) {}

RObject::RObject(QVector3D position) : m_position(position), m_transform(), m_color(0xff000000) {}

RObject::RObject(qreal x, qreal y, qreal z) : m_position(x, y, z), m_transform(), m_color(0xff000000) {}

RObject::~RObject() {}

// GET
QVector3D RObject::position() const {return m_position;}
uint RObject::color() const {return m_color;}

// SET
void RObject::setPosition(QVector3D *position)
{
  m_position = *position;
}

void RObject::setPosition(qreal x, qreal y, qreal z)
{
  m_position.setX(x);
  m_position.setY(y);
  m_position.setZ(z);
}

void RObject::setColor(uint index_or_rgb)
{
  m_color = index_or_rgb;
}