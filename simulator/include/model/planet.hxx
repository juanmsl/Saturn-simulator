#ifndef __PLANET_HXX__
#define __PLANET_HXX__

#include <OgreRoot.h>
#include <OgreVector3.h>
#include <model/ship.hxx>

class Planet {
protected:
    Ogre::Vector3 position;
    Ogre::Real mass;
    Ogre::Real radius;
    Ogre::Radian rotation;
    Ship* ship;

public:
    Planet(Ship* ship, const Ogre::Vector3 position, const Ogre::Real mass, const Ogre::Real radius, const Ogre::Radian rotation);

    void setPosition(const Ogre::Vector3 position);
    void setMass(const Ogre::Real mass);
    void setRadius(const Ogre::Real radius);
    void setRotation(const Ogre::Radian rotation);

    Ship* getShip();
    Ogre::Vector3 getPosition();
    Ogre::Real getMass();
    Ogre::Real getRadius();
    Ogre::Radian getRotation();
};

#endif