cmake_minimum_required(VERSION 3.24)
project(Moteur_Jeu_CPP_TAY_NUNES_MARIE_MAGDELAINE)

set(CMAKE_CXX_STANDARD 17)

add_executable(Moteur_Jeu_CPP_TAY_NUNES_MARIE_MAGDELAINE main.cpp Sources/Scene.cpp Headers/Scene.h Sources/Object.cpp Headers/Object.h Sources/Component.cpp Headers/Component.h Sources/Arena.cpp Headers/Arena.h Sources/ObjectManager.cpp Headers/ObjectManager.h Sources/Tag.cpp Headers/Tag.h Sources/TagManager.cpp Headers/TagManager.h Sources/TransformComponent.cpp Headers/TransformComponent.h Sources/Factory.cpp Headers/Factory.h Sources/PhysicsComponent.cpp Headers/PhysicsComponent.h Sources/Event.cpp Headers/Event.h)
