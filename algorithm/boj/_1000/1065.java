package TIL.algorithm.boj._1000;

import java.io.*;

class Main1065 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(br.readLine());
        
        if(n<100) {
            bw.write(n+"\n");
        } else if(n==1000) {
            bw.write("144\n");
        } else {
            int cnt = 99;
            for(int i=100; i<n+1; i++) {
                if(i/100+i%10 == 2*(i/10%10))
                    cnt += 1;
            }
            bw.write(cnt+"\n");
        }
        br.close();
        bw.flush();
        bw.close();
    }
}