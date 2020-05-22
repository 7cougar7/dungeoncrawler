#pragma once

#include <string>

/*
Created by Lets Make Games on July 12th, 2017
https://www.youtube.com/channel/UCAM9ZPgEIdeHAsmG50wqL1g
*/

class Map
{
private:
	
public:
	Map();
	~Map();

	static void LoadMap(std::string path, int sizeX, int sizeY);
};