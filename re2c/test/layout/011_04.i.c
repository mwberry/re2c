/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy3;
	default:	goto yy2;
	}
yy2:
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:	goto yy4;
	}
yy4:
	;
	*:=;
yy5:
	++YYCURSOR;
	goto yy4;
}
re2c: warning: line 3: control flow is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
