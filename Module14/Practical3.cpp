#include <GL/glut.h>

// Define the number of slices and stacks used to draw the torus
#define NUM_SLICES 50
#define NUM_STACKS 50

// Function to draw a torus
void drawTorus()
{
    // Loop through each stack of the torus
    for (int i = 0; i < NUM_STACKS; i++)
    {
        // Calculate the latitude of the current stack
        double lat0 = M_PI * (-0.5 + (double)(i - 1) / NUM_STACKS);
        double z0 = sin(lat0);
        double r0 = cos(lat0);

        double lat1 = M_PI * (-0.5 + (double)i / NUM_STACKS);
        double z1 = sin(lat1);
        double r1 = cos(lat1);

        // Begin drawing a quad strip
        glBegin(GL_QUAD_STRIP);

        // Loop through each slice of the torus
        for (int j = 0; j <= NUM_SLICES; j++)
        {
            // Calculate the longitude of the current slice
            double lng = 2 * M_PI * (double)(j - 1) / NUM_SLICES;
            double x = cos(lng);
            double y = sin(lng);

            // Set the normal for the current vertex
            glNormal3f(x * r0, y * r0, z0);
            // Set the vertex for the current slice and stack
            glVertex3f(x * r0, y * r0, z0);

            // Set the normal for the current vertex
            glNormal3f(x * r1, y * r1, z1);
            // Set the vertex for the current slice and stack
            glVertex3f(x * r1, y * r1, z1);
        }

        // End drawing the quad strip
        glEnd();
    }
}

// Function to display the torus
void display()
{
    // Clear the color buffer and depth buffer
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Set the color for the torus
    glColor3f(1.0, 1.0, 0.0);

    // Enable depth testing and lighting
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);

    // Set the position of the light source
    GLfloat light_position[] = {0.0, 1.0, 1.0, 0.0};
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    // Enable lighting and light0
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    // Set the material properties of the torus
    GLfloat mat_ambient[] = {0.7, 0.7, 0.7, 1.0};
    GLfloat mat_diffuse[] = {0.7, 0.7, 0.7, 1.0};
    GLfloat mat_specular[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat mat_shininess[] = {100.0};
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

    // Set the projection matrix and modelview matrix
    glMatrixMode(GL_PRO)
}
