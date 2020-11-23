#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
   float x, res;
   float e = 2.7f;
   
   
for(x=4; x<=6; x += 0.2) {
if(x<4.5f) {
    res = 1/(sin(pow(x,2)));
    printf ("The result for x=%.1f is: %f\n", x, res);
    

} 
else if(x>=4.5f) {
    if(x<5){
      res = x + log(sqrt(pow(x,7)));
      printf ("The result for x=%.1f is: %f\n", x, res);
    }
    
    if(x>=5) {
    res = log10(pow(e,x) + 4);
    printf ("The result for x=%.1f is: %f\n", x, res);
   
      }
  }
}


 getch();
 return 0;
}
