/*
 * @file	In-class Exercise 4, week 5
 * @author	Russell Waring
 * @date	2021-10-07
 * @desc	Created following along in week 4, class a.
 */

#pragma once
#ifndef __TRANSFORM__
#define __TRANSFORM__

#include "Vector2D.h"

struct Transform
{
public:
	Vector2D position;
	Vector2D rotation;
	Vector2D scale;

	std::string ToString() const;
};

#endif /* defined (__TRANSFORM__) */