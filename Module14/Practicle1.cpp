#include bits / stdc++.h
void display()
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear screen

    // Draw triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0); // Red
    glVertex2f(0.0, 0.5);     // Top
    glColor3f(0.0, 1.0, 0.0); // Green
    glVertex2f(-0.5, -0.5);   // Bottom left
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex2f(0.5, -0.5);    // Bottom right
    glEnd();

    glFlush(); // Render
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);               // Initialize GLUT
    glutCreateWindow("OpenGL Triangle"); // Create window with title
    glutDisplayFunc(display);            // Register display function
    glutMainLoop();                      // Enter main loop
    return 0;
}
