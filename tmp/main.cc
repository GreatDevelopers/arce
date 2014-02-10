#include "wt.h"
#include "rccDwg.h"

int main()
{

double x1, x2, y1, y2, pointX[20], pointY[20], offSet;
string s1, title1[20], title2[20];
line myLine;
dimH dim;
dimV dim2;
circle bar;

offSet = 4;

cin >> rect1 >> rect2 >> dia;
cin  >> scaleX >> scaleY >> layer;

for (int i = 0; i < layer; i++)
{
  cin >> lwidth[i] >> lcolor[i] >> lstyle[i] >> 
  fstyle[i] >> fcolor[i] >> hangle[i];

/*
cerr << "\n" << lwidth[i] << " . " << lcolor[i] << " . " << lstyle[i] << " . " << 
fstyle[i] << " . " << fcolor[i] << " . " << hangle[i];
*/

}

rect room1;
double cx = 110, cy = 173;
double cxOrg = cx, cyOrg = cy;

layerCurrent = 3;

x1 = rect1/scaleX; 
y1 = rect2/scaleY;

room1.set( cx, cy, layerCurrent, x1, y1 );


s1 = dToS(rect1);
dim.set(cx, cy + y1/2. + offSet, layerCurrent, x1, s1);
//dim.set(cx, cy - y1/2. - offSet, layerCurrent, x1, s1);
s1 = dToS(rect2);
//dim2.set(cx + x1/2. + offSet, cy, layerCurrent, y1, s1);
dim2.set(cx - x1/2. - offSet, cy, layerCurrent, y1, s1);

layerCurrent = 1;

bar.set(cx, cy, layerCurrent,dia/scaleX);


// placeText  thisText;
// x1 = 15 + 5 + 25/2.; y1 = 5+10/2.;
// thisText.set(x1,y1,layerCurrent,"b","c","");

// dim2.set(x1, y1, layerCurrent, leanConProj / scaleY, s1);

 return 0;
}
