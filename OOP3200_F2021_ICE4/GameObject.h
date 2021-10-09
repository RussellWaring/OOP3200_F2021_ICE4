/*
 * @file	In-class Exercise 4, week 5
 * @author	Russell Waring
 * @date	2021-10-08
 * @desc	GameObject class created following the in-class exercise.
 */

#pragma once
#ifndef __GAME_OBJECT__
#define __GAME_OBJECT__

#include "Vector2D.h"

class GameObject // Can click onto class declaration to select generate definitions for all containing methods
{
public: // The rule of three: create a destructor, a copy constructor, and overload equal operator

	// CONSTRUCTOR
	GameObject(); // default constructor
	GameObject(int id, float x, float y); // two variables
	GameObject(int id, const Vector2D& position); // takes a vector

	// Rule of Three
	~GameObject(); // Destructor
	GameObject(const GameObject& other_object); // Copy Constructor - GameObject never assigned, and assigned to something else
	// GameObject is what *we* are giving back, ampersand - going to return a reference to the object that's given
	GameObject& operator=(const GameObject& other_object); // Assignment Operator - Reassigning object another value, already been initialized

	// Accessors
	Vector2D GetPosition() const;
	int GetID() const;

	// Mutators
	void SetPosition(float x, float y);
	void SetPosition(const Vector2D& new_position); // by passing in reference - a Vector itself, good to give options
	void SetID(int id);

	// Utility Functions
	std::string ToString() const; // an accessor. Access include to the std string due to inclusion of Vector2D.h

private:
	int m_id; // a name for the object, an identifier. makes the data type more complex
	Vector2D m_position; // position of GameObject, m_ for private

};

#endif /* defined (__GAME_OBJECT__) */