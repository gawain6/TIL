package TIL.algorithm.boj._1000;

import java.io.*;
import java.util.Arrays;

class Main1316 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(br.readLine());
        int ret = 0;
        for(int i=0; i<n; i++) {
            StringBuilder word = new StringBuilder(br.readLine());
            // if(word.toString().equals())
            char[] c = word.toString().toCharArray();
            bw.write(c[0]+"\n");
        }
        bw.flush();
    }
}