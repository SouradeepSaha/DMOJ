import java.util.*;

public class Main {
	public static void main(String [] args) {
		Scanner cin = new Scanner(System.in);
		int kase = cin.nextInt(), cnt = 0;
		String a = cin.next();
		String b = cin.next();
		for (int i = 0; i < kase; i++) if (a.charAt(i) == 'C' && b.charAt(i) == 'C') cnt++;
		System.out.println(cnt);
	}
}
