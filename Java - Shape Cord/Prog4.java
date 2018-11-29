public class Prog4 {
	public static void main(String args[]) {
		Shape s = new Shape();
		Rect r = new Rect();

		s.getCord(1, 2);
		s.showCord();
		Shape a;
		a = r;
		a.getCord(4, 5);
		a.showCord();
		a = s;
		a.getCord(4, 5);
		a.showCord();

	}
}
