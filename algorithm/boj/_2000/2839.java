package TIL.algorithm.boj._2000;

import java.io.*;

class Main2839 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(br.readLine());
        int ans = -1;
        
        for(int i=0; i*3<=n; i++) {
            if((n-i*3)%5==0) {
                ans = i+((n-i*3)/5);
                break;
            }
        }
        bw.write(ans+"\n");
        bw.flush();
    }
}