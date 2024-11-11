#include <graphics.h>
#include <conio.h> 

void drawRainbow() {
    // Color codes for the rainbow (in graphics.h, colors are numbered from 0-15)
    int colors[] = {RED, YELLOW, GREEN, BLUE, MAGENTA, CYAN, WHITE};
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C://TURBOC3/BGI");

    // Set the center of the rainbow and size of the arcs
    int centerX = getmaxx() / 2; 
    int centerY = getmaxy() - 50; 
    int radius = 100;

    for (int i = 0; i < 7; i++) {
        setcolor(colors[i]); 
        arc(centerX, centerY, 0, 180, radius - i * 10, radius - i * 10); 
    }

    getch(); 
    closegraph(); 
}

int main() {
    drawRainbow();
    return 0;
}
