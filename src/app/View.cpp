#include <app/View.hpp>
#include <GL/glew.h>
#include <GL/freeglut.h>

View::View()
        : windowWidth(0)
        , windowHeight(0)
{

}

void View::use()
{

        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glPushMatrix();
        glRotatef(180.f, 0.f, 0.f, 1.f);
        gluPerspective(45.0, windowWidth/double(windowHeight), 0.1, 99999.0);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        gluLookAt(eye.x, eye.y, eye.z, center.x, center.y, center.z, up.x, up.y, up.z);
        // glRotatef(85.f, 0.f, 1.f, 0.f);
        glPopMatrix();
}

void View::show()
{

}
