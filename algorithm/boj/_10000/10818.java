package TIL.algorithm.boj._10000;

import java.io.*;
import java.util.StringTokenizer;
import java.util.Arrays;

class Main10818 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int n = Integer.parseInt(st.nextToken());
        int[] arr = new int[n];
        st = new StringTokenizer(br.readLine());
        for(int i=0; i<n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        br.close();
        Arrays.sort(arr);
        bw.write(arr[0]+" "+arr[n-1]+"\n");
        bw.flush();
        bw.close();
    }
}