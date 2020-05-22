/*
Created by Lets Make Games on July 12th, 2017
https://www.youtube.com/channel/UCAM9ZPgEIdeHAsmG50wqL1g
*/

#include "Map.h"
#include "Dante's Crypt.h"
#include <fstream>


Map::Map()
{
	
}

Map::~Map()
{
	
}

void Map::LoadMap(std::string path, int sizeX, int sizeY)
{
	char tile;
	std::fstream mapFile;
	mapFile.open(path);

	for (int y = 0; y < sizeY; y++)
	{
		for (int x = 0; x < sizeX; x++)
		{
			mapFile.get(tile);
			Game::AddTile(atoi(&tile), x * 32, y * 32);
			mapFile.ignore();
		}
	}

	mapFile.close();
}

