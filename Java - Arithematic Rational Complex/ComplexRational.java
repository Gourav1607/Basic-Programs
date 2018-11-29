import java.util.Scanner;

class ComplexRational {
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);

		System.out.println(" Enter the first Real number's Numerator : ");
		int a = scan.nextInt();
		System.out.println(" Enter the first Real number's Denominator : ");
		int b = scan.nextInt();

		System.out.println(" Enter the second Real number's Numerator : ");
		int c = scan.nextInt();
		System.out.println(" Enter the second Real number's Denominator : ");
		int d = scan.nextInt();

		Rational R = new Rational();
		Rational R1 = new Rational();

		R.getP(a);
		R.getQ(b);

		R1.getP(c);
		R1.getQ(d);

		int numerat = new Rational().addNumerator(R, R1);
		int denom = new Rational().addDenominator(R, R1);
		System.out.println(" The answer is numerator : " + numerat);
		System.out.println(" denom : " + denom);

		System.out.println(" Enter the first number's Real Part : ");
		int p = scan.nextInt();
		System.out.println(" Enter the first number's Imaginary Part : ");
		int q = scan.nextInt();

		System.out.println(" Enter the second number's Real Part : ");
		int r = scan.nextInt();
		System.out.println(" Enter the second number's Imaginary Part : ");
		int s = scan.nextInt();

		Complex c1 = new Complex();
		Complex c2 = new Complex();
		c1.getReal(p);
		c1.getImaginary(q);
		c2.getReal(r);
		c2.getImaginary(s);
		int re = new Complex().addReal(c1, c2);
		int im = new Complex().addImaginary(c1, c2);
		System.out.println(" The Result is " + re + " + " + im + "i\n");

	}
}
