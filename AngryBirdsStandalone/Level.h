#ifndef LEVEL_H
#define LEVEL_H

#include <SFML/Graphics.hpp>
#include "ObjectStaticsClass.h"
#include <vector>

class LevelObject
{
	public:
	double x;
	double y;
	double angle;
	Object* object;

	b2BodyDef bodyDef;
	b2Body* bodyObject;
	
	LevelObject() { }
	LevelObject( double x, double y, double angle, Object* object );
};

class Level
{
	public:
	std::vector< LevelObject* > objects;

	void addObject( LevelObject* object );

	Level() { }
	Level( std::vector< LevelObject* > objects );

};

/*class LevelStatics
{
public:
	static Level* level1_1()
	{
		Level* level;
		level->addObject( new LevelObject( 65.54, -9.081, 329.714, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level->addObject( new LevelObject( 73.544, -13.655, 205.369, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
		level->addObject( new LevelObject( 76.954, -7.554, 90.679, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
		level->addObject( new LevelObject( 69.882, -9.632, 180.567, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
		level->addObject( new LevelObject( 65.788, -13.603, 335.673, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
		level->addObject( new LevelObject( 64.193, -5.616, 269.944, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level->addObject( new LevelObject( 69.79, -12.632, 90.477, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
		level->addObject( new LevelObject( 73.996, -9.004, 28.898, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level->addObject( new LevelObject( 75.307, -5.577, 270.045, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level->addObject( new LevelObject( 5.043, -0.972, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level->addObject( new LevelObject( 2.549, -1.136, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level->addObject( new LevelObject( 8.196, -0.925, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level->addObject( new LevelObject( 0, -1.082, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level->addObject( new LevelObject( 62.402, -7.576, 89.304, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
		level->addObject( new LevelObject( 70.096, -4.682, 359.986, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
		level->addObject( new LevelObject( 72.587, 1.363, 89.997, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
		level->addObject( new LevelObject( 66.672, 1.293, 89.997, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
		level->addObject( new LevelObject( 77.517, -0.045, 44.998, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_5X5") ) );
		level->addObject( new LevelObject( 61.813, -0.045, 44.998, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_5X5") ) );
		level->addObject( new LevelObject( 73.183, -5.544, 90.074, ObjectStaticsClass::createObject("STONE_BLOCK_4X1") ) );
		level->addObject( new LevelObject( 69.763, -8.092, 0.583, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
		level->addObject( new LevelObject( 66.116, -5.615, 90.146, ObjectStaticsClass::createObject("STONE_BLOCK_4X1") ) );
		return level;
	}

};/**/
#endif