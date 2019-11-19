package TIL.algorithm.boj._2000;

import java.io.*;
import java.util.StringTokenizer;

class Main2869 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int v = Integer.parseInt(st.nextToken());
        if((a-b)*((v-a)/(a-b))+a==v) bw.write((v-a)/(a-b)+1+"\n");
        else bw.write((v-a)/(a-b)+2+"\n");
        br.close();
        bw.flush();
        bw.close();
    }
}