//
// Created by kylli on 16/03/2023.
//

#include "../Headers/TagManager.h"
TagManager* TagManager::singleton = nullptr;
int TagManager::tag_index = 0;


TagManager::TagManager() {
    this->tags = vector<Tag>();
    this->tags.reserve(30);

    Tag temp = Tag("EMPTY", tag_index);
    tag_index++;
    tags.emplace_back(temp);

    temp = Tag("PLAYER", tag_index);
    tag_index++;
    tags.emplace_back(temp);

    temp = Tag("ENVIRONMENT", tag_index);
    tag_index++;
    tags.emplace_back(temp);


}

TagManager* TagManager::GetInstance() {
    if (singleton== nullptr)
    {
        singleton = new TagManager();
    }

    return singleton;
}

void TagManager::AddTag(string name)
{
    Tag temp = Tag(name, tag_index);
    tag_index++;
    tags.emplace_back(temp);
}

Tag TagManager::GetTag(int id)
{
    return tags[id];
}