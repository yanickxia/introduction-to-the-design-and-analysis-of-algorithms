#include <stdio.h>


struct Point {
	int x;
	int y;
};

typedef struct Point Point;


int is_associate(Point x1, Point x2, Point y1, Point y2) {
	double k1 = (x2.y - x1.y) / (x2.x - x1.x);
	double k2 = (y2.y - y1.y) / (y2.x - y1.x);

	double b1 = x1.y - (x1.x * k1);
	double b2 = y1.y - (y1.x * k2);

	if (k1 == k2 && b1 != b2) { //Æ½ÐÐÏß
		return 0;
	}

	double ass_x = (b2 - b1) / (k1 - k2);

	if (ass_x > x1.x && ass_x < x2.x) {
		return 1;
	}

	return 0;

}


int main() {

	Point x1 = { 0,0 };
	Point x2 = { 5,5 };

	Point y1 = { 2,0 };
	Point y2 = { 0,2 };

	printf("%d", is_associate(x1, x2, y1, y2));
}
