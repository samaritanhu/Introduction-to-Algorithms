import java.io.IOException;
import java.util.Scanner;

public class EvaluatingPolynomials {

	public static void main(String[] args) throws IOException {
		Scanner input = new Scanner(System.in);
		System.out.println("Input the higest order n of polynomial: ");
		int n = input.nextInt();
		System.out.println("Input n+1 coefficients of polynomial from low-order to high-order£º");
		int[] eff = new int[n+1];
		for(int i = 0; i < n+1; i++) {
			eff[i] = input.nextInt();
		}
		System.out.println("Input the variable x£º");
		double x = input.nextDouble();
		double sum = 0;
		for(int i = n; i >= 1; i--) {
			sum += eff[i];
			sum *= x;
		}//Iterative method to calculate f(x).
		sum += eff[0];
		System.out.println("The evaluated value in x is£º"+sum);
		input.close();
	}

}
