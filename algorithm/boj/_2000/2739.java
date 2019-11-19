package TIL.algorithm.boj._2000;

import java.util.Scanner;

class Main2739 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        for(int i=1; i<10; i++) {
            System.out.println(n+" * "+i+" = "+n*i);
        }
    }
}