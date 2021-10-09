/*
 * @file	In-class Exercise 4, week 5
 * @author	Russell Waring
 * @date	2021-10-08
 * @desc	GameObject class created following the in-class exercise.
 */

#include "GameObject.h"

GameObject::GameObject(): m_id(0), m_position(Vector2D())// want Vector2D to be initialized
{
}

GameObject::GameObject(const int id, const float x, const float y) // makes sense to make const, not manipulating these values here
{
	SetID(id);
	SetPosition(x, y);
}

GameObject::GameObject(const int id, const Vector2D& position) // pass by reference as oppose to pass by value. Don't want to copy the Vector, want to pass an object of that type, create a reference
{
	SetID(id);
	SetPosition(position);
}

GameObject::~GameObject() // default, no pointer
= default;

GameObject::GameObject(const GameObject& other_object)
{
	SetID(other_object.m_id);
	SetPosition(other_object.m_position); // can't use get position due to where it is defined. "Take the other one and copy it to this"
}

GameObject& GameObject::operator=(const GameObject& other_object) // Copy Constructor is the same, with slight differences.
{
	SetID(other_object.m_id);
	SetPosition(other_object.m_position); // Again
	return (*this); // Return a reference to *this* - difference between Copy Constructor and Assignment Operator
}

Vector2D GameObject::GetPosition() const // Const member variable
{
	return m_position;
}

int GameObject::GetID() const
{
	return m_id;
}

void GameObject::SetID(const int id)
{
	m_id = id;
}

void GameObject::SetPosition(const float x, const float y)
{
	m_position.Set(x, y);
}

void GameObject::SetPosition(const Vector2D& new_position) // Reference to the particular Vector
{
	m_position = new_position;
}

std::string GameObject::ToString() const
{
	std::string output_string;
	output_string += "ID       : " + std::to_string(GetID()) + "\n";
	output_string += "Position : " + GetPosition().ToString() + "\n"; // works because position is a vector2d and ToString belongs to that
	return output_string;
}
