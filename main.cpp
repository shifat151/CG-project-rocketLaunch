
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <unistd.h>
#include<windows.h>

float Number=0;
float tx=0;
float ty=1;
float tz=1;

int flag=0;



void drawTriangle(){


    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5,1.0);
    glVertex2f(0.5,1.0);
    glVertex2f(0.0,-0.5*tx);
    glEnd();



}

 void circle_full(double radius)    //aivaba kaj kora
{
    //glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

    glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(0+radius*cos(3.14159*i/180),0+radius*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

    glFlush();

}
 void circle_halfdown(double radius)    //aivaba kaj kora
{
    //glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

    glBegin(GL_POLYGON);
        for(int i=180;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(0+radius*cos(3.14159*i/180),0+radius*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

    glFlush();

}
 void circle_halfup(double radius)    //aivaba kaj kora
{
    //glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

    glBegin(GL_POLYGON);
        for(int i=0;i<180;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(0+radius*cos(3.14159*i/180),0+radius*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

    glFlush();

}
void drawpol(){

   glBegin(GL_POLYGON);
   glVertex2f(-2.0,2.0);
   glVertex2f(0.0,2.5);
   glVertex2f(2.0,2.0);
   	glVertex2f(0.0,-2.0);
    glEnd();

}



void cloud(){
    glColor3f(1,1,1);
    glPushMatrix();
    glTranslated(0,0,0);
    glScalef(2.8,3.0,1);
    circle_full(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(2,0,0);
    glScalef(2.5,3.0,1);
    circle_full(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(4.3,0,0);
    glScalef(2.8,3.0,1);
    circle_full(1);
    glPopMatrix();

      glPushMatrix();
    glTranslated(6.3,0,0);
    glScalef(3.0,3.0,1);
    circle_full(.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.3,0,0);
    glScalef(3.0,3.0,1);
    circle_full(.5);
    glPopMatrix();







}





void drawpol1(){


   glBegin(GL_POLYGON);
   glVertex2f(-1.5,2.0);
   glVertex2f(1.5,1.0);
   glVertex2f(0.0,-2.0);
   	glVertex2f(-0.5,0.8);
   	glVertex2f(-1.5,1.0);
    glEnd();

}
void drawLine(){
    glLineWidth(5);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-2,0);
    glVertex2f(2,0);
    glEnd();


}




void gas(){

        glColor3f(0.956, 0.447, 0.203);
    glPushMatrix();
    glTranslatef(3.3,3,0);
    drawTriangle();
	glPopMatrix();

    glColor4f(0.956, 0.921, 0.203,0.4);
    glPushMatrix();
    glTranslatef(3.3,3,0);
    glScalef(1,1.15,1);
    drawTriangle();
	glPopMatrix();

    glColor3f(0.956, 0.447, 0.203);
    glPushMatrix();
    glTranslatef(3.5,3,0);
    drawTriangle();
	glPopMatrix();

    glColor3f(0.956, 0.447, 0.203);
    glPushMatrix();
    glTranslatef(3.7,3,0);
    drawTriangle();
	glPopMatrix();

    glColor3f(0.956, 0.447, 0.203);
    glPushMatrix();
    glTranslatef(3.8,3,0);
    drawTriangle();
	glPopMatrix();

    glColor3f(0.956, 0.447, 0.203);
    glPushMatrix();
    glTranslatef(3.9,3,0);
    drawTriangle();
	glPopMatrix();

    glColor4f(0.956, 0.921, 0.203,0.4);
    glPushMatrix();
    glTranslatef(4.0,3,0);
    glScalef(1,1.2,1);
    drawTriangle();
	glPopMatrix();

    glColor4f(0.956, 0.921, 0.203,0.7);
    glPushMatrix();
    glTranslatef(4.1,3,0);
    glScalef(1,1.35,1);
    drawTriangle();
	glPopMatrix();


	  glColor4f(0.956, 0.921, 0.203,0.4);
    glPushMatrix();
    glTranslatef(3.6,3,0);
    glScalef(1,1.15,1);
    drawTriangle();
	glPopMatrix();



}

void rocket(){

    //gas out
    glColor3f(1,1,1);
    glPushMatrix();
    glTranslatef(4.0,-9.6,0);
    glScalef(1.1,3,1);
    gas();
	glPopMatrix();

	//making of rocket
    glPushMatrix();
    glTranslatef(8,5,0);
    glScalef(.5,2.1,1);
    glColor3f(0.0, 0.0, 0.0);
    circle_full(3);
	glPopMatrix();

    glColor3f(1.0, 1.0, 1.0);
    glPushMatrix();
    glTranslatef(8,5,0);
    glScalef(.45,2.0,1);
    circle_full(3);
	glPopMatrix();

    glColor3f(1.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(8,8,0);
    glScalef(.382,1,1);
    circle_halfup(3);
	glPopMatrix();

    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(8,8,0);
    glScalef(.65,1,1);
    drawLine();
	glPopMatrix();


    glColor3f(0.745, 0.823, 0.835);
    glPushMatrix();
    glTranslatef(8,2.5,0);
    glScalef(.63,1.75,1);
    circle_halfdown(2);
	glPopMatrix();

    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(8,2.5,0);
    glScalef(.65,1,1);
    drawLine();
	glPopMatrix();


    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(8,6.5,0);
    glScalef(.5,.5,1);
    circle_full(1.7);
	glPopMatrix();

    glColor3f(0.745, 0.823, 0.835);
    glPushMatrix();
    glTranslatef(8,6.5,0);
    glScalef(.5,.5,1);
    circle_full(1.45);
	glPopMatrix();

	glColor3f(0.419, 0.870, 0.937);
    glPushMatrix();
    glTranslatef(8,6.5,0);
    glScalef(.5,.5,1);
    circle_full(1);
	glPopMatrix();


    glColor3f(1.0, 0.0, 0.0);//middle pillar
    glPushMatrix();
    glTranslatef(8,1,0);
    glScalef(1,1.1,1);
    circle_halfup(.4);
	glPopMatrix();
    glColor3f(1, 0, 0);
    glPushMatrix();
    glTranslatef(8,-1,0);
    glScalef(.2,1,1);
    drawpol();
	glPopMatrix();


    glColor3f(1, 0, 0);//left pillar
    glPushMatrix();
    glTranslatef(9.5,0,0);
    glScalef(.4,1,1);
    drawpol1();
	glPopMatrix();

    glColor3f(1, 0, 0);
    glPushMatrix();
    glTranslatef(6.5,0,0);
    glScalef(-.4,1,1);
    drawpol1();
	glPopMatrix();




}

void gasSmoke(){


    glPushMatrix();
    glTranslated(0,0,0);
    glScalef(2.8,3.0,1);
    circle_halfup(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(2,0,0);
    glScalef(2.5,3.0,1);
    circle_halfup(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(4.3,0,0);
    glScalef(2.8,3.0,1);
    circle_halfup(1);
    glPopMatrix();

      glPushMatrix();
    glTranslated(6.3,0,0);
    glScalef(3.0,3.0,1);
    circle_halfup(.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.3,0,0);
    glScalef(3.0,3.0,1);
    circle_halfup(.5);
    glPopMatrix();






}


void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Fills the scene with blue.
	glLoadIdentity();

    //draw cloud
    glPushMatrix();
    glTranslatef(1+(ty/200),10,0);
    glScalef(.23,.2,1);
    cloud();
	glPopMatrix();

	   glPushMatrix();
    glTranslatef(3+(ty/200),10.5,0);
    glScalef(.23,.2,1);
    cloud();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(6+(ty/200),10,0);
    glScalef(.23,.2,1);
    cloud();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(8.3+(ty/200),10.4,0);
    glScalef(.23,.2,1);
    cloud();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.2+(ty/200),10,0);
    glScalef(.14,.14,1);
    cloud();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(4.2+(ty/200),9,0);
    glScalef(.14,.14,1);
    cloud();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(10.2+(ty/200),9,0);
    glScalef(.14,.14,1);
    cloud();
	glPopMatrix();



    //draw rocket/
    glPushMatrix();
    glTranslatef(1,1*Number/60,0);
    glScalef(.8,.6,1);
    rocket();
	glPopMatrix();

	//draw gas smoke
     if(Number>3&&tz==1){


    glColor4f(0.635, 0.525, 0.525,.8);
    glPushMatrix();
    glTranslatef(-2.5,-3.0,0);
    glScalef(.3,.4+(ty/250),1);
    gasSmoke();
	glPopMatrix();

    glColor4f(0.635, 0.525, 0.525,1);
    glPushMatrix();
    glTranslatef(1.5,-2.5,0);
    glScalef(.3,.4+(ty/250),1);
    gasSmoke();
	glPopMatrix();

    glColor4f(0.635, 0.525, 0.525,1);
    glPushMatrix();
    glTranslatef(0.5,-3.0,0);
    glScalef(.2,.4+(ty/250),1);
    gasSmoke();
	glPopMatrix();

    glColor4f(0.635, 0.525, 0.525,.7);
    glPushMatrix();
    glTranslatef(-0.5,-3.0,0);
    glScalef(.2,.4+(ty/250),1);
    gasSmoke();
	glPopMatrix();

    glColor4f(0.635, 0.525, 0.525,.7);
    glPushMatrix();
    glTranslatef(2.3,-3.0,0);
    glScalef(.2,.4+(ty/250),1);
    gasSmoke();
	glPopMatrix();

    glColor4f(0.635, 0.525, 0.525,.7);
    glPushMatrix();
    glTranslatef(3.3,-3.0,0);
    glScalef(.4,.4+(ty/250),1);
    gasSmoke();
	glPopMatrix();


    glPushMatrix();
    glTranslatef(8.5,-3.0,0);
    glScalef(.3,.6+(ty/250),1);
    gasSmoke();
	glPopMatrix();

    glColor4f(0.635, 0.525, 0.525,1);
    glPushMatrix();
    glTranslatef(4.5,-2,5);
    glScalef(.3,.6+(ty/250),1);
    gasSmoke();
	glPopMatrix();

    glColor4f(0.635, 0.525, 0.525,.7);
    glPushMatrix();
    glTranslatef(6,-2.5,0);
    glScalef(.3,1+(ty/250),1);
    gasSmoke();
	glPopMatrix();

    glColor4f(0.635, 0.525, 0.525,1);
    glPushMatrix();
    glTranslatef(6.5,-3.0,0);
    glScalef(.3,.9+(ty/250),1);
    gasSmoke();
	glPopMatrix();


    glPushMatrix();
    glTranslatef(8.5,-3.0,0);
    glScalef(.3,.8+(ty/250),1);
    gasSmoke();
	glPopMatrix();

    glColor4f(0.635, 0.525, 0.525,1);
    glPushMatrix();
    glTranslatef(9.8,-3.0,0);
    glScalef(.3,.6+(ty/250),1);
    gasSmoke();
	glPopMatrix();
    }

    glutSwapBuffers();
}



void doFrame(int v) {
    Number++;
    tx++;

    if(flag==0){
    ty++;
     if(ty>100){
        flag=1;
    }
    }

    if(flag==1){
        ty--;
        if(ty==-50){
            flag=0;
            tz=0;
        }


    }
    if(tx>2){
        tx=0;
    }
        //full animation time control
       if(Number>1200){
        Number=0;
        tz=1;
        PlaySound("rocket123.wav", NULL, SND_ASYNC|SND_FILENAME);

    }



    glutPostRedisplay();

    glutTimerFunc(30,doFrame,0);//after each 24 mill sec the loop wil continue
}


void init() {
	glClearColor(0, 0, 1, 1);
		// The next three lines set up the coordinates system.
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();////replace the matrix with current matrix
    glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
	glOrtho(-3, 12, -3, 12, -1, 1);//(minX,maxX,minY,maxY,minZ,maxZ)
	glMatrixMode(GL_MODELVIEW);
}


int main() {
    //glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Rocket Launch");
    init();
    glutDisplayFunc(display);
    PlaySound("rocket123.wav", NULL, SND_ASYNC|SND_FILENAME);
    glutTimerFunc(200,doFrame,0);
    glutMainLoop();
    return 0;
}




