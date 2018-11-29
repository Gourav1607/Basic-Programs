class Rational {
	private int numerator, denominator;

	Rational() {
		numerator = 0;
		denominator = 0;
	}

	public void getP(int p) {
		this.numerator = p;
	}

	public void getQ(int q) {
		this.denominator = q;
	}

	public int addNumerator(Rational a, Rational b) {
		return a.numerator * b.denominator + b.numerator * a.denominator;
	}

	public int addDenominator(Rational a, Rational b) {
		return a.denominator * b.denominator;
	}
}
