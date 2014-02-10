class shape
{
	protected:
	  double xCo, yCo;		// coordinate of center
	  string linecolor;		// color of outline
	  string fillcolor;		// color of interior
	  string linestyle;		// style of outline
	  string fillstyle;		// style of interior
	  string linewidth;		// width of outline
	  int layer;			// layer on which to draw fig.
	public:
	  shape()
	  	{ xCo=0; yCo=0; layer=0;}
	  void set(double x, double y, int la)
	  	{ xCo=x; yCo=y; layer=la;
	  	}
	  void draw()
	  	{
	  	  fillstyle = fstyle[layer];
	  	  fillcolor = fcolor[layer];
	  	  linestyle = lstyle[layer];
	  	  linecolor = lcolor[layer];
	  	  linewidth = lwidth[layer];	  	
	  	}
};

class rect : public shape
{
	protected:
		double xLength;		// length in X -direction
		double yLength;		// length in Y -direction
	public:
	  rect() : shape()		// no-arg constructor
	  	{}
	  void set(double x, double y, int la,
	  		double xL, double yL)
	  	{ shape::set(x, y, la);
	  	  xLength = xL; yLength = yL;
	  	  draw();
	  	};                      
	  void draw()			// draw rectangular
	  	{
	  	  shape::draw();
	  	  double x1, y1, x2, y2;
	  	  x1 = xCo - 0.5 * xLength;
	  	  y1 = yCo - 0.5 * yLength;
	  	  x2 = xCo + 0.5 * xLength;
	  	  y2 = yCo + 0.5 * yLength;

	  	    cout << "\\psframe[fillstyle=" << fillstyle
	  	    << setiosflags(ios::fixed)
	  	    << setprecision(3)
	  	    << ",fillcolor=" << fillcolor
	  	    << ",linestyle=" << linestyle
	  	    << ",linecolor=" << linecolor
	  	    << ",linewidth=" << linewidth << "]" 
	  	    << "(" << x1 << " , " << y1 << ")"
	  	    << "(" << x2 << " , " << y2 << ")"
	  	    << "\n";

	  	}
};

class circle : public shape
{
	protected:
		double dia;		// Diameter
	public:
	  circle() : shape()		// no-arg constructor
	  	{}
	  void set(double x, double y, int la,
	  		double d)
	  	{ shape::set(x, y, la);
	  	  dia = d;
	  	  draw();
	  	};                      
	  void draw()			// draw rectangular
	  	{
	  	  shape::draw();

	  	    cout << "\\pscircle[fillstyle=" << fillstyle
	  	    << setiosflags(ios::fixed)
	  	    << setprecision(3)
	  	    << ",fillcolor=" << fillcolor
	  	    << ",linestyle=" << linestyle
	  	    << ",linecolor=" << linecolor
	  	    << ",linewidth=" << linewidth << "]" 
	  	    << "(" << xCo << " , " << yCo << ")"
	  	    << "{" << 0.5 * dia << "}"
	  	    << "\n";

	  	}
};

class dimH : public shape
{
	protected:
		double length;		// length along dimension
		string dimText;		// Label
	public:
	  dimH() : shape()		// no-arg constructor
	  	{}
	  void set(double x, double y, int la,
	  		double len, string dim)
	  	{ shape::set(x, y, la);
	  	  length = len; dimText = dim;
	  	  draw();
	  	};                      
	  void draw()			// draw rectangular
	  	{
	  	  shape::draw();
	  	  double x1, y1, x2, y2;
	  	  x1 = xCo - 0.5 * length;
	  	  y1 = yCo ;
	  	  x2 = xCo + 0.5 * length;
	  	  y2 = yCo ;

		    cout << "\\psline[" 
	  	    << setiosflags(ios::fixed)
	  	    << setprecision(3)
	  	    << "linestyle=" << linestyle
	  	    << ",linecolor=" << linecolor
	  	    << ",linewidth=" << linewidth << "]{|<*->|*}" 
	  	    << "(" << x1 << " , " << y1 << ")"
	  	    << "(" << x2 << " , " << y2 << ")"
	  	    << "\n";

		    cout << "\\uput{" 
	  	    << setiosflags(ios::fixed)
	  	    << setprecision(3)
	  	    << gapText << "}[90]{0}" 
	  	    << "(" << xCo << " , " << yCo << ")"
	  	    << setiosflags(ios::fixed)
	  	    << setprecision(0)
	  	    << "{\\color{"
	  	    << linecolor << "}" 
	  	    << dimText << " "
//	  	    << length 
	  	    << "}\n";

	  	}
};

class dimV : public shape
{
	protected:
		double length;		// length along dimension
		string dimText;		// Label
	public:
	  dimV() : shape()		// no-arg constructor
	  	{}
	  void set(double x, double y, int la,
	  		double len, string dim)
	  	{ shape::set(x, y, la);
	  	  length = len; dimText = dim;
	  	  draw();
	  	};                      
	  void draw()			// draw rectangular
	  	{
	  	  shape::draw();
	  	  double x1, y1, x2, y2;
	  	  y1 = yCo - 0.5 * length;
	  	  x1 = xCo ;
	  	  y2 = yCo + 0.5 * length;
	  	  x2 = xCo ;

		    cout << "\\psline[" 
	  	    << setiosflags(ios::fixed)
	  	    << setprecision(3)
	  	    << "linestyle=" << linestyle
	  	    << ",linecolor=" << linecolor
	  	    << ",linewidth=" << linewidth << "]{|<*->|*}" 
	  	    << "(" << x1 << " , " << y1 << ")"
	  	    << "(" << x2 << " , " << y2 << ")"
	  	    << "\n";

		    cout << "\\uput{" 
	  	    << setiosflags(ios::fixed)
	  	    << setprecision(3)
	  	    << gapText << "}[180]{90}" 
	  	    << "(" << xCo << " , " << yCo << ")"
	  	    << setiosflags(ios::fixed)
	  	    << setprecision(0)
	  	    << "{\\color{"
	  	    << linecolor << "}" 
	  	    << dimText << " "
	  	    << "}\n";

	  	}
};

class line
{
	protected:
	  double x1, y1, x2, y2;	// end point
	  string linecolor;		// color of outline
	  string linestyle;		// style of outline
	  string linewidth;		// width of outline
	  int layer;			// layer on which to draw fig.
	public:
	  line()
	  	{ x1=0; y1=0; x2=10; y2=10; layer=0;}
	  void set(double xx1, double yy1, 
	  	   double xx2, double yy2, int la)
	  	{ x1=xx1; y1=yy1; x2=xx2; y2=yy2; layer=la;
	  	  draw();
	  	}
	  void draw()
	  	{
	  	  linestyle = lstyle[layer];
	  	  linecolor = lcolor[layer];
	  	  linewidth = lwidth[layer];	  	
		    cout << "\\psline[" 
	  	    << setiosflags(ios::fixed)
	  	    << setprecision(3)
	  	    << "linestyle=" << linestyle
	  	    << ",linecolor=" << linecolor
	  	    << ",linewidth=" << linewidth << "]" 
	  	    << "(" << x1 << " , " << y1 << ")"
	  	    << "(" << x2 << " , " << y2 << ")"
	  	    << "\n";
	  	}



};

class placeText
{
	protected:
	  double x, y;			// reference point
	  string linecolor;		// color of outline
	  string alignH;		// Horizontal align
	  string alignV;		// Verical align
	  string stuff;			// Text
	  int layer;			// layer on which to draw fig.
	public:
	  placeText()
	  	{ x=0; y=0; layer=0; alignH="c"; alignV="b"; stuff="";}
	  void set(double x1, double y1, int la, string saH, string saV,
	  		string sText)
	  	{ x=x1; y=y1; layer=la; alignH= saH;
	  	  alignV= saV; stuff= sText;
	  	  draw();
	  	}
	  void draw()
	  	{
	  	  linecolor = lcolor[layer];
		    cout << "\\rput[" 
	  	    << setiosflags(ios::fixed)
	  	    << setprecision(3)
	  	    << alignH
	  	    << alignV
	  	    << "]" 
	  	    << "(" << x << " , " << y << ")"
	  	    << "{\\color{"
	  	    << linecolor << "}" 
	  	    << stuff << " "
	  	    << "}\n";
	  	}



};

