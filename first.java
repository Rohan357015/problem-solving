import java.util.*;

public class first {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int d = sc.nextInt();
            
            // First half goals
            int r1 = a;
            int k1 = b;
            // Second half goals
            int r2 = c - a;
            int k2 = d - b;
            
            if (valid(r1, k1) && valid(r2, k2)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
    
    // Helper function
    static boolean valid(int x, int y) {
        int big = Math.max(x, y);
        int small = Math.min(x, y);
        return big <= 2 * (small + 1);
    }
}
