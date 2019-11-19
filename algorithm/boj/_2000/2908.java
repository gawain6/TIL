package TIL.algorithm.boj._2000;

import java.io.*;
import java.util.StringTokenizer;

class Main2908 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n1 = Integer.parseInt(st.nextToken());
        int n2 = Integer.parseInt(st.nextToken());
        int rlt;
        
        n1 = (n1/100)+((n1/10)%10)*10+(n1%10)*100;
        n2 = (n2/100)+((n2/10)%10)*10+(n2%10)*100;
        rlt = n1 > n2 ? n1 : n2;
        br.close();
        bw.write(rlt+"\n");
        bw.flush();
        bw.close();
    }
}