package TIL.algorithm.boj._1000;

import java.io.*;
import java.util.StringTokenizer;

class Main1011 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int t = Integer.parseInt(br.readLine());
        for(int i=0; i<t; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            double r = Math.floor(Math.sqrt(y-x)+0.5);
            if(y-x <= Math.pow(r, 2)) bw.write((int)r*2-1+"\n");
            else bw.write((int)r*2+"\n");
        }
        br.close();
        bw.flush();
        bw.close();
    }
}