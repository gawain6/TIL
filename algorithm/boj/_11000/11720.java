package TIL.algorithm.boj._11000;

import java.io.*;

class Main11720 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int n = Integer.parseInt(br.readLine());
        String[] ns = br.readLine().trim().split("");
        int result = 0;
        
        for(int i=0; i<n; i++) {
            result += Integer.parseInt(ns[i]);
        }
        
        bw.write(result+"\n");
        bw.flush();
    }
}