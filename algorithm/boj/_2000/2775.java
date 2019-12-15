package TIL.algorithm.boj._2000;

import java.io.*;
import java.util.Arrays;

class Main2775 {
    private static final int ARR_SIZE = 14;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int t = Integer.parseInt(br.readLine());
        int s;
        for(int i=0; i<t; i++) {
            int k = Integer.parseInt(br.readLine());
            int n = Integer.parseInt(br.readLine());
            int[] prevArr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
            int[] curArr = new int[ARR_SIZE];
            Arrays.fill(curArr, 0);
            for(int j=0; j<k; j++) {
                s = 0;
                for(int l=0; l<n; l++) {
                    s += prevArr[l];
                    curArr[l] = s;
                }
                prevArr = curArr;
            }
            StringBuilder st = new StringBuilder(Integer.toString(curArr[n-1]));
            st.append("\n");
            bw.write(st.toString());
        }
        br.close();
        bw.flush();
        bw.close();
    }
}