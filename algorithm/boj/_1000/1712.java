package TIL.algorithm.boj._1000;

import java.io.*;
import java.util.StringTokenizer;

class Main1712 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int c = Integer.parseInt(st.nextToken());
        if(b>=c) bw.write(-1+"\n");
        else bw.write(a/(c-b)+1+"\n");
        bw.flush();
    }
}