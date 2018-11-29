class Shape {
	int X, Y;

	void getCord(int x, int y) {
		this.X = x;
		this.Y = y;
	}

	void showCord() {
		System.out.print("x= " + this.X + "\ny= " + this.Y);
	}
}

class Rect extends Shape {
	int lenght, breadth;

	void showCord() {
		System.out.print("inside REct");
	}

}
