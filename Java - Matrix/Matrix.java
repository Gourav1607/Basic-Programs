class Matrix {
	public int[][] transpose(int arr1[][], int a, int b) {
		int[][] transposed = new int[b][a];
		for (int i = 0; i < b; i++) {
			for (int j = 0; j < a; j++) {
				transposed[i][j] = arr1[j][i];
			}
		}
		return transposed;

	}

	public int[][] addition(int arr1[][], int arr2[][], int a, int b) {
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				arr1[i][j] = arr1[i][j] + arr2[i][j];
			}
		}
		return arr1;

	}

	public int[][] subtraction(int arr1[][], int arr2[][], int a, int b) {
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				arr1[i][j] = arr1[i][j] - arr2[i][j];
			}
		}
		return arr1;
	}

	public int[][] multiplication(int arr1[][], int arr2[][], int a, int b, int c, int d) {
		int[][] arr = new int[a][d];
		if (b == c) {
			System.out.println("Multiplication can be found out. And it is :- ");
			for (int i = 0; i < a; i++) {
				for (int j = 0; j < d; j++) {
					int x = 0;
					int y = 1;
					for (int k = 0; k < b; k++) {
						y *= (arr1[i][k] * arr2[j][k]);
						x += y;
					}
					arr[i][j] = x;
				}
			}
		} else {
			System.out.println("Multiplication can't be found out. ");
		}
		return arr;
	}

	public void toString(int arr[][], int a, int b) {
		for (int i = 0; i < a; i++) {
			System.out.println("\n");
			for (int j = 0; j < b; j++) {
				System.out.print(arr[i][j] + "\t");
			}
		}
		System.out.println("\n");
	}
}
