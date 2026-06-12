#include "dice_sim.h"

#define SAMPLE_SZ 10'000ull
#define FACE_CNT 6

int main(int argc, char const *argv[]) 
{

   size_t faces[FACE_CNT];
   rollNTimes(faces,FACE_CNT, SAMPLE_SZ);
   printReport(faces,FACE_CNT, SAMPLE_SZ);

   return 0;
}
