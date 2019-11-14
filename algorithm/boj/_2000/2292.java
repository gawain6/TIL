package TIL.algorithm.boj._2000;

import java.io.*;

class Main2292 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n1 = Integer.parseInt(br.readLine());
        int n2 = 1;
        for(int i=0; i<20000; i++) {
            n2 += i*6;
            if(n1<=n2) {
                bw.write(i+1+"\n");
                break;
            }
        }
        br.close();
        bw.flush();
        bw.close();
    }
}