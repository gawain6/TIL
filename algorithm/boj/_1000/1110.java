package TIL.algorithm.boj._1000;

import java.io.*;
import java.util.StringTokenizer;

class Main1110 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int n = Integer.parseInt(st.nextToken());
        int x = n;
        int cnt = 0;
        while(true) {
            if(cnt!=0 && x==n) {
                bw.write(cnt+"\n");
                break;
            }
            int a = x/10, b = x%10;
            x = ((x%10)*10)+((a+b)%10);
            cnt += 1;
        }
        br.close();
        bw.flush();
        br.close();
    }
}