#include<glut.h>
int axis = -1;
int  i = -2.5;
int flag = 0;
GLfloat	rtri, rval = 1;				// Angle For The Triangle ( NEW )
GLfloat	rquad;				// Angle For The Quad ( NEW )

float	r, val = 0.00;
int time = 1;

volatile bool isFullScreen = false;
static GLdouble viewer[] = { 0, 0, 5 };


void frontfence()
{
	glLoadIdentity();
	glTranslatef(-1.0, -1.8, 8.0);
	glScalef(10.0, 0.05, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();

	glLoadIdentity();
	glTranslatef(-1.0, -1.6, 8.0);
	glScalef(10.0, 0.05, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();



	glLoadIdentity();
	glTranslatef(-3.0, -2.0, 8.0);
	glScalef(0.05, 0.6, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();


	glLoadIdentity();
	glTranslatef(-2.0, -2.0, 8.0);
	glScalef(0.05, 0.6, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();


	glLoadIdentity();
	glTranslatef(-1.0, -2.0, 8.0);
	glScalef(0.05, 0.6, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();


	glLoadIdentity();
	glTranslatef(0.0, -2.0, 8.0);
	glScalef(0.05, 0.6, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();


	glLoadIdentity();
	glTranslatef(1.0, -2.0, 8.0);
	glScalef(0.05, 0.6, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();


	glLoadIdentity();
	glTranslatef(2.0, -2.0, 8.0);
	glScalef(0.05, 0.6, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();

	glLoadIdentity();
	glTranslatef(3.0, -2.0, 8.0);
	glScalef(0.05, 0.6, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();

}
void house()
{

	glLoadIdentity();
	glTranslatef(1.3, -0.7, -2.0);

	glScalef(.3, .3, .3);
	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.000, 0.6);
	glVertex3f(-2, -2, -1);
	glColor3f(1.0, 0.0, 0.0);

	glVertex3f(2, -2, 1);
	glColor3f(0.0, 1.0, 0.0);

	glVertex3f(2, 1, 1);
	glColor3f(.0, 0.0, 1.0);

	glVertex3f(-2, 1, -1);
	glEnd();


	glLoadIdentity();
	glTranslatef(1.3, -0.7, -2.0);

	glScalef(.3, .3, .3);
	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.000, 0.65);
	glVertex3f(-2, 1, -1);
	glColor3f(1.0, 0.0, 0.0);

	glVertex3f(2, 1, 1);
	glColor3f(1.0, 0.5, .0);

	glVertex3f(0, 3, 0);
	glColor3f(.0, 0.5, 0.0);

	//glVertex3f(-2, 1, -1);
	glEnd();

	glLoadIdentity();
	glTranslatef(1.3, -0.7, -2.0);

	glScalef(.3, .3, .3);
	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.000, 0.67);
	glVertex3f(2, 1, 2);
	glColor3f(1.5, 0.0, 0.0);

	glVertex3f(6, 1, 1);
	glColor3f(1.0, 0.5, 0.0);

	glVertex3f(4, 3, -2);
	glColor3f(1.0, 0.0, 0.2);

	glVertex3f(0, 3, 0);
	glColor3f(0.0, 0.5, 0.0);

	glEnd();



	glLoadIdentity();
	glTranslatef(1.3, -0.7, -2.0);
	glScalef(.3, .3, .3);
	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.000, 0.68);
	glVertex3f(2, -2, 1);
	glColor3f(.0, 0.5, 0.0);

	glVertex3f(6, -2, 1);
	glColor3f(.0, 0.0, 0.6);

	glVertex3f(6, 1, 1);
	glColor3f(0.0, 0.0, 0.2);

	glVertex3f(2, 1, 1);
	glColor3f(0.0, 0.0, 0.2);

	glEnd();

	//door
	glLoadIdentity();
	//	glTranslatef(0,0,0);

	glTranslatef(1.3, -0.7, -2.0);
	glScalef(.3, .3, .3);
	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.000, 0.0);
	glVertex3f(-1, -2, 1);
	glVertex3f(1, -2, 1);
	glVertex3f(1, 0, 1);
	glVertex3f(-1, 0, 1);
	glEnd();





}
void tower()
{

	glLoadIdentity();
	glTranslatef(1.3, -0.7, -2.0);
	//	glTranslatef(0, 0, 0);


	glScalef(.3, .3, .3);
	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.000, 0.2);
	glVertex3f(4, -2, -5);
	glColor3f(0.0, 0.6, 0.0);

	glVertex3f(8, -2, -5);
	glColor3f(0.0, 0.0, 0.5);

	glVertex3f(8, 5, -5);
	glColor3f(1.0, 1.4, 0.0);

	glVertex3f(4, 5, -5);
	glColor3f(0.0, 0.0, 0.5);

	glEnd();
	//door
	glLoadIdentity();
	glTranslatef(3.1, -0.5, -3);
	//glTranslatef(2.3, -0.7, -2.0);
	glScalef(.3, .4, .3);
	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.000, 0.0);
	glVertex3f(-1, -2, 1);
	glVertex3f(1, -2, 1);
	glVertex3f(1, 0, 1);
	glVertex3f(-1, 0, 1);
	glEnd();



}
void rearfence()
{





	glLoadIdentity();
	glTranslatef(-1.0, -0.6, -4.0);
	glScalef(10.0, 0.03, .5);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();

	glLoadIdentity();
	glTranslatef(-1.0, -0.7, -4.0);
	glScalef(10.0, 0.03, .5);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();



	glLoadIdentity();
	glTranslatef(-3.0, -0.7, -4.0);
	glScalef(0.04, 0.2, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();


	glLoadIdentity();
	glTranslatef(-2.0, -.7, -4.0);
	glScalef(0.04, 0.2, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();


	glLoadIdentity();
	glTranslatef(-1.0, -.7, -4.0);
	glScalef(0.04, 0.2, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();


	glLoadIdentity();
	glTranslatef(0.0, -.7, -4.0);
	glScalef(0.04, 0.2, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();


	glLoadIdentity();
	glTranslatef(1.0, -.7, -5.0);
	glScalef(0.04, 0.2, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();


	glLoadIdentity();
	glTranslatef(2.0, -.7, -4.0);
	glScalef(0.04, 0.2, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();

	glLoadIdentity();
	glTranslatef(3.0, -.7, -4.0);
	glScalef(0.04, 0.2, 2.0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glEnd();
}
void windmill()
{



	glRotatef(r, 0.0f, 0.0f, axis);				// Rotate The Triangle On The Z axis
	glColor3f(1.0f, 0.0f, 0.0f);




	glScalef(0.7, 0.7, 0.7);

	glBegin(GL_TRIANGLES);								// Drawing Using Triangles
	glColor3f(0.184, 0.310, 0.310);
	//glColor3f(0., 0, 0);						// Red

	glVertex3f(0.0f, 0.0f, 0.0f);					// Top Of Triangle (Front)
	glColor3f(0.980, 0.502, 0.447);						// Green
	glVertex3f(-1.0f, -0.1f, 0.0f);					// Left Of Triangle (Front)
	glColor3f(0.502, 0.502, 0.502);						// Blue
	glVertex3f(-1.0f, 0.1f, 0.0f);
	glEnd();											// Finished Drawing The Triangle

	glBegin(GL_TRIANGLES);
	glTranslatef(0, 0, -5);
	glColor3f(0.412, 0.412, 0.412);							// Red
	glVertex3f(0.0f, 0.0f, 0.0f);					// Top Of Triangle (Right)
	glColor3f(0.980, 0.502, 0.447);						// Blue
	glVertex3f(1.0f, -0.1f, 0.0f);					// Left Of Triangle (Right)
	glColor3f(0.502, 0.502, 0.502);							// Green
	glVertex3f(1.0f, 0.1f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);								// Drawing Using Triangles
	glColor3f(0.412, 0.412, 0.412);						// Red
	glVertex3f(0.0f, 0.0f, 0.0f);					// Top Of Triangle (Back)
	glColor3f(0.980, 0.502, 0.447);						// Green
	glVertex3f(-0.1f, -1.0f, 0.0f);					// Left Of Triangle (Back)
	glColor3f(0.502, 0.502, 0.502);						// Blue
	glVertex3f(0.1f, -1.0f, 0.0f);
	glEnd();											// Finished Drawing The Triangle

	glBegin(GL_TRIANGLES);								// Drawing Using Triangles
	glColor3f(0.412, 0.412, 0.412);							// Red
	glVertex3f(0.0f, 0.0f, 0.0f);				// Top Of Triangle (Left)
	glColor3f(0.980, 0.502, 0.447);						// Blue
	glVertex3f(0.1f, 1.0f, 0.0f);					// Left Of Triangle (Left)
	glColor3f(0.502, 0.502, 0.502);							// Green
	glVertex3f(-0.1f, 1.0f, 0.0f);
	glEnd();

	glPopMatrix();
	r += val;
	rtri += rval;

	//glutSwapBuffers();



}
void light()
{
	if ((flag == 1))
	{   //tower light
		glLoadIdentity();
		glTranslatef(1.3, -0.6, -2.0);
		//	glTranslatef(0, 0, 0);


		glScalef(.3, .3, .3);
		glBegin(GL_POLYGON);
		glColor3f(1.000, 1.000, 0.0);
		glVertex3f(5, 3, -3);
		glVertex3f(7, 3, -3);
		glVertex3f(7, 4, -3);
		glVertex3f(5, 4, -3);
		glEnd();
		glLoadIdentity();
		glTranslatef(0, 0, 0);
		//house bulb
		glLoadIdentity();
		glTranslatef(1.25, -0.55, -2.0);
		glColor3f(1, 1, 0.0);
		glutSolidSphere(0.1, 100, 70);

		glLoadIdentity();
		glTranslatef(2.4, -0.8, -1);
		glScalef(.3, .2, .2);
		glBegin(GL_POLYGON);
		glColor3f(1.000, 1.000, 0.0);
		glVertex3f(-1, -1, 1);
		glVertex3f(1, -1, -3);
		glVertex3f(1, 1, -3);
		glVertex3f(-1, 1, 1);
		glEnd();
	}
}
void grass()
{

	glLoadIdentity();
	glTranslatef(-3.5, -1.7, -10);
	glScalef(20, 1, 5);
	glBegin(GL_POLYGON);
	glColor3f(0.196, 1.804, 1.196);
	glVertex3f(-1, -1, 1);
	glColor3f(1.000, 1.392, 1.000);

	glVertex3f(1, -1, -3);
	glColor3f(0.486, 0.988, 0.000);
	glVertex3f(1, 1, -3);
	glColor3f(0.133, 0.545, 0.133);

	glVertex3f(-1, 1, 1);
	glEnd();

}
void drawtrees(){
	// Top of the first Tree //
	glLoadIdentity();							// Reset The Current Modelview Matrix
	glPushMatrix();
	glTranslatef(-1.7, -0.2, 2);
	glScalef(1.5, 1.5, 1.5);
	glBegin(GL_TRIANGLES);  //Defines the shape as being a triangle
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(-0.1, -0.1);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(0.1, -0.1);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(0.0, 0.1);
	glEnd();										glPopMatrix();
	//Middle of the first tree
	glPushMatrix();
	glTranslatef(-1.7, -0.3, 2);
	glScalef(1.5, 1.5, 1.5);
	glBegin(GL_TRIANGLES);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(-0.1, -0.1);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(0.1, -0.1);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(0.0, 0.1);
	glEnd();										glPopMatrix();
	// Bottom of the first tree
	glPushMatrix();
	glTranslatef(-1.7, -0.4, 2);
	glScalef(1.5, 1.5, 1.5);
	glBegin(GL_TRIANGLES);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(-0.1, -0.1);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(0.1, -0.1);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(0.0, 0.1);
	glEnd();				glPopMatrix();			glFlush();
	glTranslatef(-1.7, -0.6, -2);
	glColor3f(0.627, 0.322, 0.176);
	glScalef(0.3, 2, 4);
	glutSolidCube(.2);


	glLoadIdentity();							// Reset The Current Modelview Matrix
	glPushMatrix();
	glTranslatef(-3.3, -0.2, -2);
	glScalef(1.5, 1.5, 1.5);
	glBegin(GL_TRIANGLES);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(-0.1, -0.1);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(0.1, -0.1);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(0.0, 0.1);
	glEnd();										glPopMatrix();
	//Middle
	glPushMatrix();
	glTranslatef(-3.3, -0.3, -2);
	glScalef(1.5, 1.5, 1.5);
	glBegin(GL_TRIANGLES);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(-0.1, -0.1);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(0.1, -0.1);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(0.0, 0.1);
	glEnd();										glPopMatrix();
	// Bottom
	glPushMatrix();
	glTranslatef(-3.3, -0.4, -2);
	glScalef(1.5, 1.5, 1.5);
	glBegin(GL_TRIANGLES);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(-0.1, -0.1);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(0.1, -0.1);
	glColor3f(0.137255, 0.556863, 0.137255);	glVertex2f(0.0, 0.1);
	glEnd();				glPopMatrix();			glFlush();
	glTranslatef(-3.3, -0.58, -4);
	glColor3f(0.627, 0.322, 0.176);
	glScalef(0.3, 2.3, 4);
	glutSolidCube(.2);







}





void electricpole()
{
	glLoadIdentity();

	glTranslatef(0.2, -.17, -5.8);
	glScalef(.05, .27, .3);
	glBegin(GL_POLYGON);
	glColor3f(0.627, 0.322, 0.176);
	glVertex3f(-1, -2, -5);
	glVertex3f(1, -2, -5);
	glVertex3f(1, 2, -5);
	glVertex3f(-1, 2, -5);
	glEnd();
	glLoadIdentity();
	glTranslatef(0.2, 0.1, 0);
	glScalef(0.05, 0.05, 0.1);
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(-1, -1, 5);
	glVertex3f(1, -1, -5);
	glVertex3f(1, 1, -5);
	glVertex3f(-1, 1, 5);
	glEnd();
	glLoadIdentity();

	if (time == 1)
	{

		glColor3f(0.0f, 0.0f, 0.0f);
	}
	else
	{
		glColor3f(1.0f, 1.0f, 1.0f);

	}
	glTranslatef(-0.6, -2.5, 0.1);

	glBegin(GL_LINE_LOOP); // Start drawing a line primitive

	glVertex3f(-1.88, 2.6, -5); // The bottom left corner
	glVertex3f(+6.2, 2.6, -51); // The top left corner
	glEnd();

	glLoadIdentity();
	if (time == 1)
	{

		glColor3f(0.0f, 0.0f, 0.0f);
	}
	else
	{
		glColor3f(1.0f, 1.0f, 1.0f);

	}
	//glColor3f(0.0f, 0.0f, 0.0f);
	glTranslatef(1.6, -2.5, 0.1);
	glBegin(GL_LINE_LOOP); // Start drawing a line primitive
	glVertex3f(-1.88, 2.6, -5); // The bottom left corner
	glVertex3f(+6.2, 2.6, -51); // The top left corner
	glEnd();




}
void pole()
{

	//glLoadIdentity();

	//glTranslatef(-.5, 0.2, -8.0);

	//	glTranslatef(0, 0, 0);
	glColor3f(0.412, 0.412, 0.412);

	glScalef(.5, 9, -10);
	glutSolidCube(0.2);


}

void cloud()
{


	glLoadIdentity();

	if (time == 1)
	{
		glColor3f(0.878431, 1, 1);
		//// Second Cloud
		glColor3f(0, .6, 1);

		/*if (time == 0)
		{
		glColor3f(1, 0, 0);
		//// Second Cloud
		glColor3f(0, 1, 1);
		}
		*/
		glTranslatef(-1.6, 1.4, -20);
		glutSolidSphere(0.2, 70, 70);

		glTranslatef(0.1, 0.1, 0);
		glutSolidSphere(0.2, 70, 70);

		glTranslatef(0.1, 0.1, 0);
		glutSolidSphere(0.2, 70, 70);
		glTranslatef(0.1, -0.08, 0);
		glutSolidSphere(0.2, 70, 70);

		glLoadIdentity();

		glTranslatef(1.5, 1.4, -5);
		glutSolidSphere(0.2, 70, 70);
		glTranslatef(0.1, -0.02, 0);
		glutSolidSphere(0.1, 70, 70);
		glTranslatef(0.1, 0, 0);
		glutSolidSphere(0.2, 70, 70);
		glTranslatef(0.1, 0.1, 0);
		glutSolidSphere(0.2, 70, 70);

	}
}




void init(GLvoid)
{
	glShadeModel(GL_SMOOTH);							// Enable Smooth Shading
	glEnable(GL_DEPTH_TEST);
}
void display()
{



	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);



	if (time == 1)
	{
		glDisable(GL_LIGHTING);
		glClearColor(1.000, 0.922, 0.804, 0.2);
		glLoadIdentity();
		glTranslatef(1.9, 1.5, -20.0);
		glColor3f(1.000, 0.843, 0.000);
		glutSolidSphere(0.25, 100, 70);
	}
	if (time == 0)
	{
		//glClearColor(0.529, 0.808, 0.980, 0.5);
		glClearColor(0, 0, 0, 0.5);

		glLoadIdentity();
		glTranslatef(1.6, 1.5, -20.0);
		glColor3f(1, 1, 1.0);
		glutSolidSphere(0.2, 100, 70);


		GLfloat mat_specular[] = { 0, 0, 0, 0.0 };
		GLfloat mat_shininess[] = { 0.0 };
		GLfloat light_position[] = { 0.0, 5.0, 0.0, 0.0 };
		glClearColor(0.098, 0.098, 0.439, 0.0);
		glShadeModel(GL_SMOOTH);

		glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
		glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
		glLightfv(GL_LIGHT0, GL_POSITION, light_position);

		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);
		glEnable(GL_DEPTH_TEST);


		GLfloat position[] = { -5, 5, 0, 0.0f };


		glLightfv(GL_LIGHT0, GL_POSITION, position);


	}
	electricpole();
	frontfence();
	house();
	tower();
	rearfence();
	grass();
	cloud();
	glLoadIdentity();
	glTranslatef(0.5, -0.7, -20);
	glRotatef(90, -1, 0, 0);
	glColor3f(0, 0.392, 0.0);
	glLoadIdentity();
	glTranslatef(-.5, 0.2, -20);
	pole();
	glLoadIdentity();
	glTranslatef(-0.5, 1.0, -8.0);
	glColor3f(0.5, 0.00, 0);
	glutSolidSphere(0.03, 100, 70);
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(-.5, 1.0, -9.0);
	windmill();
	cloud();
	drawtrees();
	glLoadIdentity();
	glTranslatef(-2.5, -.5, -9);
	glRotatef(90, -1, 0, 0);
	glColor3f(0, 0, 0);
	glLoadIdentity();
	glTranslatef(-2.5, 0.2, -20.0);
	pole();
	glLoadIdentity();
	glTranslatef(-2.5, 1.0, -9.0);
	glColor3f(0.5, 0.0, 0.0);
	glutSolidSphere(0.03, 100, 70);
	windmill();
	light();

	glFlush();
	glutSwapBuffers();
}
void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function
{
	switch (key) {
	case 27:        // When Escape Is Pressed...
		exit(0);   // Exit The Program
		break;
	case 'm':
		time = 1;

		break;
	case 'n':
		time = 0;

		break;
	case 'i':
		if (flag == 1)
			val += 0.05;
		break;
	case 'd':
		if (flag == 1)
			val -= 0.05;
		break;

	case 'f': if (isFullScreen == true){
				  glutPositionWindow(0, 0);
				  isFullScreen = false;
	}
			  else{
				  glutFullScreen();
				  isFullScreen = true;
			  }
	default:
		break;
	}

}




void mouse(int button, int state, int x, int y)
{
	switch (button)
	{
	case GLUT_LEFT_BUTTON:
		if (state == GLUT_DOWN)
		{
			val = 0.5;

			flag = 1;
			axis = 1.0;
			glutPostRedisplay();
			glutIdleFunc(display);
		}
		break;

	case GLUT_RIGHT_BUTTON:
		if (state == GLUT_DOWN)
		{
			val = 0.5;
			axis = -1.0;
			flag = 1;
			glutPostRedisplay();
			//glutIdleFunc(spin);
		}
		break;

	case GLUT_MIDDLE_BUTTON:
		if (state == GLUT_DOWN)
		{
			val = 0.0;
			flag = 0;
			glutPostRedisplay();
			//glutIdleFunc(NULL);
		}
		break;

	default:

		break;
	}
}



void myReshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	if (w <= h)
		glOrtho(-2.0, 2.0, -2.0*(GLfloat)h / (GLfloat)w, 2.0*(GLfloat)h / (GLfloat)w, -10.0, 20.0);
	else
		glOrtho(-2.0*(GLfloat)w / (GLfloat)h, 2.0*(GLfloat)w / (GLfloat)h, -2.0, 2.0, -10.0, 20.0);

	glMatrixMode(GL_MODELVIEW);
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1000, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("WIND POWER");
	init();
	glutReshapeFunc(myReshape);
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keyboard);
	glutIdleFunc(display);
	glEnable(GL_DEPTH_TEST);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glutMainLoop();
}
