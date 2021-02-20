import java.util.Scanner;

class myMatrix {
	public static void main(String[] args) {
		try {
			int ch = 0;
			Scanner sc = new Scanner(System.in);
			do {
				System.out.println("1. Addition ");
				System.out.println("2. Subtraction ");
				System.out.println("3. Transpose ");
				System.out.println("4. Multiplication ");
				System.out.println("0. Exit ");
				System.out.print("Enter Your Choice :- ");
				ch = sc.nextInt();
				switch (ch) {
					case 1:
						System.out.println("Enter the dimension of matrix ");
						System.out.println("Rows : ");
						int r = sc.nextInt();
						System.out.println("Column : ");
						int c = sc.nextInt();
						int[][] arr1 = new int[r][c];
						int[][] arr2 = new int[r][c];
						System.out.println("Write the elements for 1st Matrix row wise : ");
						for (int i = 0; i < r; i++) {
							for (int j = 0; j < c; j++) {
								arr1[i][j] = sc.nextInt();
							}
						}
						System.out.println("Write the elements for 2nd Matrix row wise : ");
						for (int i = 0; i < r; i++) {
							for (int j = 0; j < c; j++) {
								arr2[i][j] = sc.nextInt();
							}
						}
						Matrix m = new Matrix();
						int[][] arr3 = new int[r][c];
						arr3 = m.addition(arr1, arr2, r, c);
						m.toString(arr3, r, c);
						break;
					case 2:
						System.out.println("Enter the dimension of matrix ");
						System.out.println("Rows : ");
						r = sc.nextInt();
						System.out.println("Column : ");
						c = sc.nextInt();
						arr1 = new int[r][c];
						arr2 = new int[r][c];
						System.out.println("Write the elements for 1st Matrix row wise : ");
						for (int i = 0; i < r; i++) {
							for (int j = 0; j < c; j++) {
								arr1[i][j] = sc.nextInt();
							}
						}
						System.out.println("Write the elements for 2nd Matrix row wise : ");
						for (int i = 0; i < r; i++) {
							for (int j = 0; j < c; j++) {
								arr2[i][j] = sc.nextInt();
							}
						}
						m = new Matrix();
						arr3 = new int[r][c];
						arr3 = m.subtraction(arr1, arr2, r, c);
						m.toString(arr3, r, c);
						break;
					case 3:
						System.out.println("Enter the dimension of matrix ");
						System.out.println("Rows : ");
						r = sc.nextInt();
						System.out.println("Column : ");
						c = sc.nextInt();
						arr1 = new int[r][c];
						System.out.println("Write the elements for the Matrix row wise : ");
						for (int i = 0; i < r; i++) {
							for (int j = 0; j < c; j++) {
								arr1[i][j] = sc.nextInt();
							}
						}
						m = new Matrix();
						arr3 = new int[c][r];
						arr3 = m.transpose(arr1, r, c);
						m.toString(arr3, c, r);
						break;
					case 4:
						System.out.println("Enter the dimension of 1st matrix ");
						System.out.println("Rows : ");
						r = sc.nextInt();
						System.out.println("Column : ");
						c = sc.nextInt();
						System.out.println("Enter the dimension of 2nd matrix ");
						System.out.println("Rows : ");
						int r1 = sc.nextInt();
						System.out.println("Column : ");
						int c1 = sc.nextInt();
						arr1 = new int[r][c];
						arr2 = new int[r1][c1];
						System.out.println("Write the elements for 1st Matrix row wise : ");
						for (int i = 0; i < r; i++) {
							for (int j = 0; j < c; j++) {
								arr1[i][j] = sc.nextInt();
							}
						}
						System.out.println("Write the elements for 2nd Matrix row wise : ");
						for (int i = 0; i < r1; i++) {
							for (int j = 0; j < c1; j++) {
								arr2[i][j] = sc.nextInt();
							}
						}
						m = new Matrix();
						arr3 = new int[r][c1];
						arr3 = m.multiplication(arr1, arr2, r, c, r1, c1);
						m.toString(arr3, r, c);
						break;
					default:
						System.out.println("Wrong Choice !! Exiting");
						break;
				}
			} while (ch != 0);
			sc.close();
		} catch (Exception c) {
			System.out.println("Sorry! " + c);
		}
	}
}
