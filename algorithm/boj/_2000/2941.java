package TIL.algorithm.boj._2000;

import java.io.*;

class Main2941 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder sb = new StringBuilder(br.readLine().trim());
        String[] alph = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
        int ret = sb.length();
        
        for(int i=0; i<alph.length; i++) {
            if(sb.toString().contains(alph[i]))
                ret -= 1*count(sb.toString(), alph[i]);
        }
        bw.write(new StringBuilder(Integer.toString(ret)).toString());
        bw.flush();
    }
    
    public static int count(String s, String v) {
        int cnt = 0;
        int size = v.length();
        
        for(int i=0; i<s.length()-(size-1); i++) {
            if(s.substring(i, i+size).equals(v)) cnt++;
        }
        return cnt;
    }
}