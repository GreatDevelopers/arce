// Program for water tank
// Date of start : 06.09.2004
// Time-stamp: <2004-07-03 10:09:48 email>

#include "wt.h"
#include "rccDwg.h"
//using namespace std;


int main()
{

double x1, x2, y1, y2, pointX[20], pointY[20];
string s1, title1[20], title2[20];
line myLine;
dimH dim;
dimV dim2;
circle bar;
for (int i = 0; i < 7; i++)
{
  //cin >> title1[i] >> title2[i];
  getline(cin, title1[i], '\n');
  getline(cin, title2[i], '\n');
}


for (int i = 0; i < 7; i++)
{
  cerr << title1[i] << "\t\t" << title2[i] << endl;
}



  cin >> endCover >> clearCover >> scaleX >> scaleY >> 
         layer >>
	colWidth >> colLength >> extraCoverToColBarsbelowGL >>
	leanConDepth >>	leanConProj >> footingWidth >> footingLength >> 
	maxDepth >> minDepth >> 
	nonTaperfootingSlab >> footingDepth >> kicker >>
	mainBarDiaAlongWidth >> mainBarSpacingAlongWidth >>
	mainBarDiaAlongLength >> mainBarSpacingAlongLength;

/*
  cout << "\n Item " << endCover << "\n Item " << clearCover << "\n Item " << scaleX << "\n Item " << scaleY << "\n Item " << layer << "\n Item " <<
	colWidth << "\n Item " << colLength << "\n Item " << extraCoverToColBarsbelowGL << "\n Item " <<
	leanConDepth << "\n Item " <<	leanConProj << "\n Item " << footingWidth << "\n Item " << footingLength << "\n Item " << 
	maxDepth << "\n Item " << minDepth << "\n Item " << nonTaperfootingSlab
	<< "\n Item " << footingDepth << "\n Item "<< kicker << "\n Item "
        mainBarDiaAlongWidth << "\n Item " << mainBarSpacingAlongWidth << "\n Item " <<
	mainBarDiaAlongLength << "\n Item " << mainBarSpacingAlongLength;
*/


for (int i = 0; i < layer; i++)
{
cin >> lwidth[i] >> lcolor[i] >> lstyle[i] >> 
fstyle[i] >> fcolor[i] >> hangle[i];

/*
cout << "\n" << lwidth[i] << " . " << lcolor[i] << " . " << lstyle[i] << " . " << 
fstyle[i] << " . " << fcolor[i] << " . " << hangle[i];
*/

}


rect room1;
double cx = 90, cy = 130;
double cxOrg = cx, cyOrg = cy;

layerCurrent = 0;

//  Border Lines
// /*
room1.set(210/2.,297/2.,1,210,297);
room1.set(190/2.+15.,287/2+5.,1,190,287);
room1.set(185/2.+20.,282/2.+5.,1,185,282);

placeText  thisText;
x1 = 15 + 5 + 25/2.; y1 = 5+10/2.;
thisText.set(x1,y1,layerCurrent,"b","c","");
myLine.set(x1-25/2., y1+10/2, x1+25/2., y1+10/2., layerCurrent);
myLine.set(x1-25/2., 70, x1+185-25/2., 70, layerCurrent);
myLine.set(130+20, 5, 130+20, 70, layerCurrent);
myLine.set(130+20+20, 25, 130+20+20, 70, layerCurrent);
y1 += 10;
string s2 = "12";
s1 = "SCALE 1:" ;
s1 = s1 + s2;
myLine.set(x1-25/2., y1+10/2, 210-5, y1+10/2., layerCurrent);
thisText.set(x1,y1,layerCurrent,"b","c",s1);
thisText.set(x1-25/2. + 2 + 130,y1,layerCurrent,"b","l","DRAWING NUMBER");
thisText.set(x1-25/2. + 2 + 130,y1-10,layerCurrent,"b","l","SHEET 1 OF 1");
myLine.set(x1+25/2., y1+10/2, x1+25/2., y1-10/2. -10, layerCurrent);


x1 = cxOrg; y1 = cyOrg - 0.5 * footingLength / scaleY;
s1 = "\\Large \\underline {PLAN}";
thisText.set(x1, y1 - 2.0 * gap,layerCurrent,"B","c",s1);


x1 =  15 + 5 + 25 + 105/2.;
y1 = 5 + 20/2.;
s1 = "\\Huge ";
s2 = s1 + title1[6] ;
thisText.set(x1,y1,layerCurrent,"b","c", s2);
s2 = "\\begin{minipage}{130mm} \\Huge \\center \\textbf { ";
s1 = s2 + title2[6];
s2 = "} \\end{minipage} ";
s1 = s1 + s2;
thisText.set(20+130/2.,45/2. + 25,layerCurrent,"b","c",s1);
x1 += 105/2. + 1.;
y1 = 5 + 20. + 2 ;
for (int i = 0; i < 6; i++)
{
  thisText.set(x1,y1+i*7,layerCurrent,"b","l",title1[i]);
  thisText.set(x1+20,y1+i*7,layerCurrent,"b","l",title2[i]);
}
x1 -= 1 ;
y1 = 5 + 20 +7;
x2 = x1 + 55;
y2 = y1;
for (int i = 0; i < 5 ; i++)
{
  myLine.set(x1, y1+i*7, x2, y2+i*7, layerCurrent);
}

// */
layerCurrent = 1 ;
// Lean Concrete
x1 = (footingWidth + 2. * leanConProj)/ scaleX ;
y1 = (footingLength + 2. * leanConProj) / scaleY ;
room1.set(cx, cy, layerCurrent, x1, y1);

// Footing base
x1 = footingWidth / scaleX ;
y1 = footingLength  / scaleY ;
room1.set(cx, cy, layerCurrent, x1, y1);

// Non Tapered Foundation
x1 = (colWidth + 2. * extraCoverToColBarsbelowGL + 2.0 * nonTaperfootingSlab)/ scaleX ;
y1 = (colLength + 2. * extraCoverToColBarsbelowGL + 2. * nonTaperfootingSlab) / scaleY ;

if (nonTaperfootingSlab > 3 ) room1.set(cx, cy, layerCurrent, x1, y1);

// Column below GL
x1 = (colWidth + 2. * extraCoverToColBarsbelowGL)/ scaleX ;
y1 = (colLength + 2. * extraCoverToColBarsbelowGL) / scaleY ;
room1.set(cx, cy, layerCurrent, x1, y1);

// Column
x1 = colWidth / scaleX ;
y1 = colLength  / scaleY ;
room1.set(cx, cy, layerCurrent, x1, y1);

// Slope Lines
x1 = cxOrg + 0.5 * (colWidth + 2. * extraCoverToColBarsbelowGL + 2.0 *
nonTaperfootingSlab )/ scaleX ;
y1 = cyOrg + 0.5 * (colLength + 2. * extraCoverToColBarsbelowGL + 2.0 *
nonTaperfootingSlab ) / scaleY ;
x2 = cxOrg + 0.5 * footingWidth / scaleX ;
y2 = cyOrg + 0.5 * footingLength  / scaleY ;
myLine.set(x1, y1, x2, y2, layerCurrent);

x1 = cxOrg - 0.5 * (colWidth + 2. * extraCoverToColBarsbelowGL+ 2.0 *
nonTaperfootingSlab )/ scaleX ;
y1 = cyOrg - 0.5 * (colLength + 2. * extraCoverToColBarsbelowGL+ 2.0 *
nonTaperfootingSlab ) / scaleY ;
x2 = cxOrg - 0.5 * footingWidth / scaleX ;
y2 = cyOrg - 0.5 * footingLength  / scaleY ;
myLine.set(x1, y1, x2, y2, layerCurrent);

x1 = cxOrg + 0.5 * (colWidth + 2. * extraCoverToColBarsbelowGL+ 2.0 *
nonTaperfootingSlab )/ scaleX ;
y1 = cyOrg - 0.5 * (colLength + 2. * extraCoverToColBarsbelowGL+ 2.0 *
nonTaperfootingSlab ) / scaleY ;
x2 = cxOrg + 0.5 * footingWidth / scaleX ;
y2 = cyOrg - 0.5 * footingLength  / scaleY ;
myLine.set(x1, y1, x2, y2, layerCurrent);

x1 = cxOrg - 0.5 * (colWidth + 2. * extraCoverToColBarsbelowGL+ 2.0 *
nonTaperfootingSlab )/ scaleX ;
y1 = cyOrg + 0.5 * (colLength + 2. * extraCoverToColBarsbelowGL+ 2.0 *
nonTaperfootingSlab ) / scaleY ;
x2 = cxOrg - 0.5 * footingWidth / scaleX ;
y2 = cyOrg + 0.5 * footingLength  / scaleY ;
myLine.set(x1, y1, x2, y2, layerCurrent);

// Reinforcement in plan
layerCurrent = 3;

// Vertical
x1 = 0.5 * (footingWidth - colWidth - 2. * extraCoverToColBarsbelowGL)/ scaleX ;
x1 = cxOrg - 0.5 * x1 - ( 0.5 * colWidth + extraCoverToColBarsbelowGL ) /
	scaleX;
y1 = cyOrg + (0.5 * footingLength - endCover) / scaleY ;
x2 = x1 ;
double tempx = x2;
y2 = cyOrg - (0.5 * footingLength - endCover) / scaleY ;
myLine.set(x1, y1, x2, y2, layerCurrent);

double xx2 = cxOrg + 1.2 * (cxOrg - x1), xx1 = x1, yy2 = y2, yy1 = y1;
s1 = "\\#";
s1 += dToS(mainBarDiaAlongWidth);
s1 += "@";
s1 += dToS(mainBarSpacingAlongLength);
string ss2 = s1;
// Horizontal

y1 = 0.5 * (footingLength - colLength - 2. * extraCoverToColBarsbelowGL)/scaleY ;
y1 = cyOrg - 0.5 * y1 - ( 0.5 * colLength + extraCoverToColBarsbelowGL ) /
	scaleY;
x1 = cxOrg + (0.5 * footingWidth - endCover) / scaleX ;
y2 = y1 ;
double tempy = y2;
x2 = cxOrg - (0.5 * footingWidth - endCover) / scaleX ;
myLine.set(x1, y1, x2, y2, layerCurrent);


layerCurrent = 2;

y2 = cyOrg + 1.2 * (cyOrg - y1);
// s1 = dToS(kkp);
s1 = "\\#";
s1 += dToS(mainBarDiaAlongLength);
s1 += "@";
s1 += dToS(mainBarSpacingAlongWidth);
dim.set( (x1+x2)/2. , y2, layerCurrent, x2 -x1 , s1);

bar.set(tempx, y2, 3,2);

//dim.set( (x1+x2)/2. , y2, layerCurrent, x2 -x1 , s1);

// placing labelling of horizontal bars
dim2.set( xx2, (yy1 + yy2 )/2., layerCurrent, yy2 - yy1 , ss2);
bar.set(xx2, tempy, 3,2);



// dimension of width of footing
x1 = cxOrg;
y1 = cyOrg + gap  + ( 0.5 * footingLength + leanConProj) / scaleY;
s1 = dToS(footingWidth);
dim.set(x1, y1, layerCurrent, footingWidth/scaleX, s1);

x1 = cxOrg - 0.5 * ( footingWidth + leanConProj) / scaleX;
y1 = cyOrg + gap  + ( 0.5 * footingLength + leanConProj) / scaleY;
s1 = dToS(leanConProj);
dim.set(x1, y1, layerCurrent, leanConProj / scaleX, s1);

x1 = cxOrg + 0.5 * ( footingWidth + leanConProj) / scaleX;
y1 = cyOrg + gap  + ( 0.5 * footingLength + leanConProj) / scaleY;
s1 = dToS(leanConProj);
dim.set(x1, y1, layerCurrent, leanConProj / scaleX, s1);


y1 = cyOrg;
x1 = cxOrg - gap  - ( 0.5 * footingWidth + leanConProj) / scaleX;
s1 = dToS(footingLength);
dim2.set(x1, y1, layerCurrent, footingLength/scaleX, s1);

y1 = cyOrg - 0.5 * ( footingLength + leanConProj) / scaleY;
x1 = cxOrg - gap  - ( 0.5 * footingWidth + leanConProj) / scaleX;
s1 = dToS(leanConProj);
dim2.set(x1, y1, layerCurrent, leanConProj / scaleY, s1);

y1 = cyOrg + 0.5 * ( footingLength + leanConProj) / scaleY;
x1 = cxOrg - gap  - ( 0.5 * footingWidth + leanConProj) / scaleX;
s1 = dToS(leanConProj);
dim2.set(x1, y1, layerCurrent, leanConProj / scaleY, s1);


// =======================

// Section

cx = 90; cy = 200;
cxOrg = cx; cyOrg = cy;
x1 = ( footingWidth + 2. * leanConProj ) / scaleX;
y1 = ( leanConDepth ) / scaleY;
room1.set(cx, cy, layerCurrent, x1, y1);
cy +=  0.5 * leanConDepth / scaleY ;
pointX[0] =  -0.5 * footingWidth ; pointY[0] =  0 ;
pointX[1] = pointX[0]  ; pointY[1] = minDepth  ;
pointX[2] =  -0.5 * (colWidth + 2. * extraCoverToColBarsbelowGL +
            2. * nonTaperfootingSlab) ; pointY[2] =  maxDepth ;
pointX[3] =  -0.5 * (colWidth + 2. * extraCoverToColBarsbelowGL) ;
		 pointY[3] =  maxDepth ;
pointX[4] =  -0.5 * (colWidth + 2. * extraCoverToColBarsbelowGL) ;
		 pointY[4] =  maxDepth + kicker ;
pointX[5] =  -0.5 * (colWidth + 2. * extraCoverToColBarsbelowGL) ;
		 pointY[5] =  footingDepth ; 
pointX[6] =  -0.5 * colWidth ; pointY[6] =  footingDepth ; 
pointX[7] =  -0.5 * colWidth ; pointY[7] = pointY[6] + 0.5 * colWidth ; 

int NoPoints = 8;
for (int i = 0; i < NoPoints; i++)
{
	pointX[i+NoPoints] = -pointX[i];
	pointY[i+NoPoints] = pointY[i];
}
for (int i = 0; i < 2 * NoPoints; i++)
{
	pointX[i] = cx + pointX[i] / scaleX;
	pointY[i] = cy + pointY[i] / scaleY;
}
for (int i = 0; i < NoPoints -1 ; i++)
{
// draw lines
	myLine.set(pointX[i], pointY[i], pointX[i+1], pointY[i+1], layerCurrent);

}

for (int i = NoPoints; i < 2 * NoPoints -1 ; i++)
{
// draw lines
	myLine.set(pointX[i], pointY[i], pointX[i+1], pointY[i+1], layerCurrent);

}

	myLine.set(pointX[4], pointY[4], pointX[4+NoPoints],
pointY[4+NoPoints], layerCurrent);


x1 = cx - (leanConProj + 0.5 * footingWidth) / scaleX - gap;
y1 = cy - 0.5 * leanConDepth / scaleY;
s1 = dToS(leanConDepth);
dim2.set(x1, y1, layerCurrent, leanConDepth / scaleY, s1);

y1 = cy + 0.5 * minDepth / scaleY;
s1 = dToS(minDepth);
dim2.set(x1, y1, layerCurrent, minDepth / scaleY, s1);

y1 = cy + (minDepth + 0.5 * (maxDepth - minDepth) ) / scaleY;
s1 = dToS(maxDepth - minDepth);
dim2.set(x1, y1, layerCurrent, (maxDepth - minDepth) / scaleY, s1);


y1 = cy + (maxDepth + 0.5 * kicker ) / scaleY;
s1 = dToS(kicker);
dim2.set(x1, y1, layerCurrent, kicker / scaleY, s1);

y1 = cy + ( footingDepth - 0.5 * ( footingDepth -  maxDepth - kicker ) ) /
	scaleY;
s1 = dToS(footingDepth - maxDepth - kicker);
dim2.set(x1, y1, layerCurrent, ( footingDepth -  maxDepth - kicker ) / scaleY, s1);

// Steel along  width
x1 = cxOrg - ( 0.5 * footingWidth - endCover) /scaleX ;
if (footingWidth >= footingLength) 
{ y1 = cy + (clearCover + 0.5 * mainBarDiaAlongWidth)/scaleY; }

else

{ y1 = cy + (clearCover + mainBarDiaAlongLength + 0.5 *
mainBarDiaAlongWidth)/scaleY; }
x2 = cxOrg + ( 0.5 * footingWidth - endCover) /scaleX ;

y2 = y1;
myLine.set(x1, y1, x2, y2, layerCurrent);

// Steel along Length

x1 = cxOrg - ( 0.5 * footingWidth - endCover) /scaleX ;
if (footingWidth < footingLength) 
{ y1 = cy + (clearCover + 0.5 * mainBarDiaAlongWidth)/scaleY; }

else

{ y1 = cy + (clearCover + mainBarDiaAlongLength + 0.5 *
mainBarDiaAlongWidth)/scaleY; }
x2 = cxOrg + ( 0.5 * footingWidth - endCover) /scaleX ;

y2 = y1;

double bigDia = mainBarDiaAlongWidth;


if (bigDia < mainBarDiaAlongLength) bigDia = mainBarDiaAlongLength;

double noBars = footingWidth / mainBarSpacingAlongWidth ;

double noBarsIntegerPart = (int) noBars;

cerr << "\n 1 nobars : " << noBars << "\n Integet part : " <<
noBarsIntegerPart;

if (noBarsIntegerPart != noBars) noBarsIntegerPart++ ;

noBars = noBarsIntegerPart++ ;

cerr << "\n 2 nobars : " << noBars << "\n Integet part : " <<
noBarsIntegerPart;

double spacing = footingWidth / noBars /scaleX;
double xStart = cxOrg - 0.5 *  footingWidth / scaleX + 0.5 * spacing;

double dia = mainBarDiaAlongLength / scaleX;

for (int i = 0 ; i < noBars; i++ )
{
	bar.set(xStart + i * spacing, y2, layerCurrent, dia);
}

//myLine.set(x1, y1, x2, y2, layerCurrent);

 return 0;
}
