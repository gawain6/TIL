package TIL.algorithm.boj._10000;

import java.util.Scanner;

class Main10950 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test_case = sc.nextInt();
        int a, b;
        
        for(int i=0; i<test_case; i++) {
            a = sc.nextInt();
            b = sc.nextInt();
            System.out.println(a+b);
        }
    }
}