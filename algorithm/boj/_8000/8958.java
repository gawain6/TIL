package TIL.algorithm.boj._8000;

import java.io.*;

class Main8958 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int n = Integer.parseInt(br.readLine().trim());
        
        for(int i=0; i<n; i++) {
            String str = br.readLine().trim();
        
            int total = 0;
            int cumulative = 1;
            for(int j=0; j<str.length(); j++) {
                if(str.charAt(j)=='O') {
                    total += (cumulative++);
                } else {
                    cumulative = 1;
                }
            }
            sb.append(total+"\n");
        }
        System.out.print(sb);
    }
}