#include <stdio.h>
#include <graphics.h>
#include <time.h>
int main()
{  int i,x[100],y[100],rx,ry,gd,gw,l,d+2,s=16;
    srand(time(NULL));
    detectgraph(&gd,&gw);
    initgraph(&gd,&gw,NULL);
    setfillstyle(1,1);
    bar(s-s/2,s-s/2,(s/2)+s*(1350/s),s+s/2);
     bar(s-s/2,(-s/2)+s*(700/s),(s/2)+s*(1350/s),(s/2)+s*(700/s));
      bar(s-s/2,s-s/2,s+s/2,(s/2)+s*(700/s));
       bar((-s/2)+s*(1350/s),s-s/2,(s/2)+s*(1350/s),(s/2)+s*(700/s));
       x[0]=s*(1350/(2*s));  y[0]=s*(700/(2*s));
       bar(x[0]-s/2,y[0]-s/2,x[0]+s/2,y[0]+s/2)
     l=5;
     for(i=1;i<l;i++){
     x[i]=x[0]-(i*s);
     y[i]=y[0];
     bar(x[i]-s/2,y[i]-s/2,x[i]+s/2,y[i]+s/2);
     }
     rx=s;ry=s;
     setfillstyle(1,2);
     while(getpixel(rx,ry)!=0)
     {
    rx=s*(1+rand()%(1350/s-1));
    ry=s*(1+rand()%(700/s-1));

     }
     bar(rx-s/2,ry-s/2,rx+s/2,ry+s/2);
     delay(2000);
     while(1){
  setfillstyle(1,0);
  bar(x[l-1]-s/2,y[l=1]-s/2,x[l-1]+s/2,y[l-1]+s/2);
  for(i=l;i>0;i--){
      x[i]=x[i-1];
      y[i]=y[i-1];

  }
   if(d==0){
       x[0]=x[0]-s;
        
   }


     }

       getch();
}