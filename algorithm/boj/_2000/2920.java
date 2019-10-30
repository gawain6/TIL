package TIL.algorithm.boj._2000;

import java.io.*;
import java.util.StringTokenizer;
import java.util.Arrays;

class Main2920 {
    public static void main(String[] args) throws IOException {
        final int[] ascending = {1, 2, 3, 4, 5, 6, 7, 8};
        final int[] descending = {8, 7, 6, 5, 4, 3, 2, 1};

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int[] arr = new int[8];
        for(int i=0; i<8; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        
        if(Arrays.equals(ascending, arr)){
            bw.write("ascending\n");
        } else if(Arrays.equals(descending, arr)) {
            bw.write("descending\n");
        } else {
            bw.write("mixed\n");
        }
        br.close();
        bw.flush();
        bw.close();
    }
}