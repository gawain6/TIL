package TIL.algorithm.boj._1000;

import java.io.*;

class Main1157 {
    public static void main(String[] args) throws IOException {
        final int alph = 26;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String s = br.readLine().toLowerCase();
        int[] arr = new int[alph];
        int max_idx = 0;
        int max_val = 0;
        int max_cnt = 0;
        
        for(int i=97; i<123; i++) {
            int cnt = 0;
            for(int j=0; j<s.length(); j++) {
                if(s.charAt(j)==(char)i)
                    cnt++;
            }
            arr[i-97] = cnt;
        }
        for(int i=0; i<alph; i++) {
            if(arr[i]>max_val) {
                max_val = arr[i];
                max_idx = i;
            }
        }
        for(int i=0; i<alph; i++) {
            if(arr[i] == max_val)
                max_cnt++;
        }
        
        if(max_cnt >= 2) {
            bw.write("?");
        } else {
            bw.write(65+max_idx);
        }
        br.close();
        bw.write("\n");
        bw.flush();
        bw.close();
    }
}