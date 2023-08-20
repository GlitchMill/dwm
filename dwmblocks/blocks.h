//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"󰍛 RAM: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g ",	10,		0},
	{"󰻠 CPU: ", "printf '%.1f%%' $(grep 'cpu ' /proc/stat | awk '{usage=($2+$4)*100/($2+$4+$5)} END {print usage }') ",	10,	0}, 
	{"", "volume",				        	1,		2},	
	{"", "date '+%b %d (%a) %I:%M%p'",			5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
