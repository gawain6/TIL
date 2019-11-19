package TIL.algorithm.boj._10000;

import java.util.Scanner;
import java.util.Arrays;

class Main10817 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        
        int[] arr = {a, b, c};
        Arrays.sort(arr);
        System.out.println(arr[1]);
    }
}