import java.util.Scanner;

public class Solution {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();

		long[] delta = new long[n];
		for (int i = 0; i < m; i++) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			int k = sc.nextInt();
			delta[a - 1] += k;
			if (b < delta.length) {
				delta[b] -= k;
			}
		}

		long maximum = Long.MIN_VALUE;
		long current_number = 0;
		for (int i = 0; i < delta.length; i++) {
			current_number += delta[i];
			maximum = Math.max(maximum, current_number);
		}
		System.out.println(maximum);

		sc.close();
	}
}