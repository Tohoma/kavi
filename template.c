#pragma config(Motor,  port1,           left,          tmotorVex393_HBridge, openLoop, driveLeft)
#pragma config(Motor,  port10,          right,         tmotorVex393_HBridge, openLoop, reversed, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

typedef struct {
	float x;
	float y;
} Coor;


Coor cone1;

static Coor coneList[4];
static Coor position;

void  setup();
void forward(float distance);
task main()
{

setup();
forward(cone1.x - position.x);

}

void setup() {
	cone1.x = 105.8;
	cone1.y = 105.8; 
	coneList[0] = cone1;
	position.x = 105.8;
	position.y = 58.4;
};

void forward(float distance) {
	motor[left] = 127;
	motor[right] = 89;
	
	wait1Msec(1000);
	
};
