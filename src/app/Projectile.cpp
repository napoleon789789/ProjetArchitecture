#include <app/Projectile.hpp>
#include <GL/freeglut.h>

#include <iostream>

Projectile::Projectile(SuperOpenGL::Vector position, SuperOpenGL::Vector direction)
    : _direction(direction.normalize(1))
    , _position(position)
{}

void Projectile::display()
{
    glColor3f(1, 0, 0);
    glPushMatrix();
        glTranslatef(_position.x, _position.y, _position.z);
        glutSolidSphere(size, 180, 180);
    glPopMatrix();
}

void Projectile::update(float elapsedTime)
{
    _position += _direction * speed * elapsedTime;
}
