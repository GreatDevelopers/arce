// Header file for wt.cc

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

const double PI = 3.142, gap = 5, gapText = 2;
double endCover, clearCover, rect1, rect2, dia;
double scaleX, scaleY;

string fsCurrent, fcCurrent, lsCurrent, lcCurrent, lwCurrent,
textNotes="\\Huge", textDim="\\normalsize" ;


const int layerConst = 10;
int layer, layerCurrent;

double colWidth, colLength, extraCoverToColBarsbelowGL, leanConDepth,
	leanConProj, footingWidth, footingLength, maxDepth, minDepth,
	nonTaperfootingSlab, footingDepth, kicker,
	mainBarDiaAlongWidth, mainBarSpacingAlongWidth,
	mainBarDiaAlongLength, mainBarSpacingAlongLength;

string lwidth[layerConst],lcolor[layerConst],lstyle[layerConst],
fstyle[layerConst],fcolor[layerConst],hangle[layerConst];

string dToS(double);

string dToS(double d)
{
	stringstream s;
	s << d;
	return s.str();
}
