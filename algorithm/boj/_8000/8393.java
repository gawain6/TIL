package TIL.algorithm.boj._8000;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;

class Main8393 {
    public static void main(String[] agrs) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        int sum = 0;
        
        for(int i=1; i<=n; i++) {
            sum += i;
        }
        bw.write(sum+"\n");
        
        br.close();
        bw.flush();
        br.close();
    }
}