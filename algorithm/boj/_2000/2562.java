package TIL.algorithm.boj._2000;

import java.io.*;
import java.util.Arrays;

class Main2562 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int idx = 0;
        
        int[] arr = new int[9];
        for(int i=0; i<arr.length; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }
        
        int[] sort_arr = arr.clone();
        Arrays.sort(sort_arr);
        int max_value = sort_arr[(arr.length)-1];
        
        for(int i=0; i<arr.length; i++) {
            if(arr[i] == max_value)
                idx = i + 1;
        }
        
        bw.write(max_value+"\n");
        bw.write(idx+"\n");
        br.close();
        bw.flush();
        bw.close();
    }
}