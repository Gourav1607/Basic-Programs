class Complex {
	private int real, imaginary;

	Complex() {
		real = imaginary = 0;
	}

	public void getReal(int p) {
		this.real = p;
	}

	public void getImaginary(int q) {
		this.imaginary = q;
	}

	public int addReal(Complex a, Complex b) {
		return a.real + b.real;
	}

	public int addImaginary(Complex a, Complex b) {
		return a.imaginary + b.imaginary;
	}
}
