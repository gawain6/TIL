package TIL.algorithm.boj._1000;

import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

class Main1546 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int n = Integer.parseInt(br.readLine());
        double valSum = 0;
        StringTokenizer st = new StringTokenizer(br.readLine());
        double[] arr = new double[n];
        
        for(int i=0; i<n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        
        Arrays.sort(arr);
        
        for(int i=0; i<n; i++) {
            valSum += arr[i]/arr[n-1]*100;
        }
        bw.write(String.format("%.6f", valSum/n)+"\n");
        br.close();
        bw.flush();
        bw.close();
    }
}