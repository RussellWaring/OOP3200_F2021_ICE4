/*
 * @file	In-class Exercise 4
 * @author	Russell Waring
 * @date	2021-09-27
 * @desc	Created following along in week 4, class a.
 */

#include "Transform.h"

std::string Transform::ToString() const
{
	std::string output_string;

	output_string += "Position: " + position.ToString() + "\n";
	output_string += "Rotation: " + rotation.ToString() + "\n";
	output_string += "Scale   : " + scale.ToString();

	return output_string;
}