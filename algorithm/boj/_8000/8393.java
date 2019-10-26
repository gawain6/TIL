package TIL.algorithm.boj._8000;

import java.util.Scanner;

class Main8393 {
    public static void main(String[] agrs) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum = 0;
        
        for(int i=1; i<=n; i++) {
            sum += i;
        }
        System.out.println(sum);
    }
}