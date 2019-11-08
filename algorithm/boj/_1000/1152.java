package TIL.algorithm.boj._1000;

import java.io.*;

class Main1152 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int cnt = 0;
        
        String s = br.readLine();
        for(int i=0; i<s.length(); i++) {
            if(s.charAt(0)==' '&&s.length()==1) cnt--;
            if(i!=0&&s.charAt(i)==' ') cnt++;
            else if(i==s.length()-1) cnt++;
        }
        bw.write(cnt+"\n");
        bw.flush();
    }
}