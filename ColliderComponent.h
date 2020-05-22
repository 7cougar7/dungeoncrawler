#pragma once

/*
Created by Lets Make Games in August 2017, edited by Zachary Smith in 2020
https://www.youtube.com/channel/UCAM9ZPgEIdeHAsmG50wqL1g
*/

#include <string>
#include "SDL.h"
#include "Components.h"

class ColliderComponent : public Component
{
public:
	SDL_Rect collider;
	std::string tag;

	TransformComponent* transform;

	ColliderComponent(std::string t)
	{
		tag = t;
	}
	void init() override
	{
		if (!entity->hasComponent<TransformComponent>())
		{
			entity->addComponent<TransformComponent>();
		}
		transform = &entity->getComponent<TransformComponent>();

		Game::colliders.push_back(this);
	}

	void update() override
	{
		collider.x = static_cast<int>(transform->position.x); //AABB collision
		collider.y = static_cast<int>(transform->position.y);
		collider.w = transform->width * transform->scale;
		collider.h = transform->height * transform->scale;
	}
};