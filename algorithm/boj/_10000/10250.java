package TIL.algorithm.boj._10000;

import java.io.*;
import java.util.StringTokenizer;

class Main10250 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int t = Integer.parseInt(br.readLine());
        int h, w, n, front;
        
        for(int i=0; i<t; i++) {
            StringBuilder sb = new StringBuilder();
            StringTokenizer st = new StringTokenizer(br.readLine());
            h = Integer.parseInt(st.nextToken());
            w = Integer.parseInt(st.nextToken());
            n = Integer.parseInt(st.nextToken());
            if(h==1) front = 1;
            else if(n%h==0) front = h;
            else front = n%h;
            sb.append(front);
            sb.append(String.format("%02d", (int)Math.ceil((double)n/(double)h)));
            sb.append("\n");
            bw.write(sb.toString());
        }
        br.close();
        bw.flush();
        bw.close();
    }
}