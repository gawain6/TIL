package TIL.algorithm.boj._2000;

import java.util.Scanner;

class Main2884 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int hour, minu;
        hour = sc.nextInt();
        minu = sc.nextInt();
        
        minu -= 45;
        if(minu<0) {
            hour -= 1;
            minu += 60;
        }
        if(hour<0) {
            hour += 24;
        }
        System.out.println(hour+" "+minu);
    }
}