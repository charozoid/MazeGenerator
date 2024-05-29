#pragma once
#include <set>
#include "TileMap.h"
class Maze {
public:
	Maze();
	Maze(int sizeX, int sizeY);
	~Maze();
	TileMap* getMap();
	void backTracker(Tile& current, std::set<Tile*>& visited);
private:
	TileMap* map;
	std::set<Tile*> visited;
};