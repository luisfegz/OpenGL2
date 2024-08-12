#include "Cola.h"

void Cola::DibujarCola(float Angulo, int n, float x, float y, float z) {
    glPushMatrix();
    glTranslatef(x, y, z);

    for (int i = 0; i < n; i++) {
        glPushMatrix();
        glTranslatef(0.5 * i, 0.0, 0.0);
        glRotatef((GLfloat)Angulo + i * 9, 0.0, 0.0, 1.0);
        glTranslatef(0.5, 0.0, 0.0);

        for (int j = 0; j < 3; j++) {
            glPushMatrix();
            glRotatef((GLfloat)j * 120, 0.0, 0.0, 1.0);
            glTranslatef(0.3, 0.0, 0.0);
            glScalef(0.5, 0.2, 0.5);
            glutSolidCube(1.0);
            glPopMatrix();
        }

        glRotatef((GLfloat)i * 15, 0.0, 1.0, 0.0);
        glTranslatef(-0.2 * i, 0.0, 0.0);

        glPopMatrix();
    }

    glPopMatrix();
}
