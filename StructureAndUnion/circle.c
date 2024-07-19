#include <stdio.h>

typedef struct {
 int x;
 int y;
} point;

typedef struct {
    float radius;
    point center;
} circle;

int main() {
    circle c = {4.5, {1, 3}};
    
    printf("Radius of a circle: %3.1f \n Center of a circle: %d, %d", c.radius, c.center.x,c.center.y);
    return 0;
}