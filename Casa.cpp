
#define Angulo 30

void Casa::DibujarCasa(float x, float y, float z)
{
	glPushMatrix();
	glTranslatef(x, y, z);

	glTranslatef(-1.0, 0.0, 0.0);
	glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0); 
	glPushMatrix();
	glScalef(2.0, 0.4, 1.0);
	glutSolidCube(1.0);
	glPopMatrix();

	glTranslatef(1.0, 0.0, 0.0);
	glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef(2.0, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();

}