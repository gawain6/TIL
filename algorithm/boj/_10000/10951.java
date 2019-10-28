package TIL.algorithm.boj._10000;

import java.io.*;
import java.util.StringTokenizer;

class Main10951 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        
        while(true) {
            String rl = br.readLine();
            if(rl==null)
                break;
            st = new StringTokenizer(rl);
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int sum = a + b;
            bw.write(sum+"\n");
        }
        bw.flush();
    }
}