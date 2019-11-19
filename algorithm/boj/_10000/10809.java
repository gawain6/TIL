package TIL.algorithm.boj._10000;

import java.io.*;

class Main10809 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String s;
        int n;
        int[] arr = new int[26];
        for(int i=0; i<arr.length; i++) {
            arr[i] = -1;
        }
        
        s = br.readLine();
        for(int i=0; i<s.length(); i++) {
            char ch = s.charAt(i);
            n = ch-97;
            if(arr[n]==-1)
                arr[n] = i;
        }
        for(int i=0; i<arr.length; i++) {
            bw.write(arr[i]+" ");
        }
        br.close();
        bw.write("\n");
        bw.flush();
        bw.close();
    }
}