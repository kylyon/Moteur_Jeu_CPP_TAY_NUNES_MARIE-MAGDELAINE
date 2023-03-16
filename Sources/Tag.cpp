//
// Created by kylli on 16/03/2023.
//

#include "../Headers/Tag.h"

Tag::Tag()
{
    this->name = "Tag";
    this->id = -1;
}

Tag::Tag(string name, int id)
{
    this->name = name;
    this->id = id;
}

int Tag::getID()
{
    return id;
}
string Tag::getName()
{
    return name;
}