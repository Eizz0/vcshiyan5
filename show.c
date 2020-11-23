#include "imageFormationUtils.h"
#include <stdio.h>
int main(int argc, char* argv[])
{
  struct point3d *points;
  int N_v = 78728;
  float f;
  points = readOff(argv[1], &N_v);
  f = 0.1;
  pinholeProjection(points,N_v,f);
  uvprojection(points, N_v);

    /* Writing */
printf("COFF\n");
printf("78728 0 0\n");
for(int i = 0; i < N_v; i++){
		printf("%f %f %f %d %d %d\n", points[i].x, points[i].y, points[i].z, points[i].r, points[i].g, points[i].b);
	}

  return 0;
}
