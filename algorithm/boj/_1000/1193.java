package TIL.algorithm.boj._1000;

import java.io.*;

class Main1193 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(br.readLine());
        int temp;
        int n1 = 1;
        int n2 = 1;
        int cnt = 1;
        
        while(true) {
            if(n==cnt) {
                bw.write(n1+"/"+n2+"\n");
                break;
            } else if(n1==1&&n2%2!=0) {
                n2++; cnt++;
            } else if(n1==1&&n2%2==0) {
                cnt+=n2-1;
                temp = n1;
                n1 = n2;
                n2 = temp;
                if(cnt>n) {
                    for(int i=n1; i>1; i--) {
                        n1--; n2++; cnt--;
                        if(n==cnt) break;
                    }
                }
            } else if(n1%2!=0&&n2==1) {
                cnt+=n1-1;
                temp = n1;
                n1 = n2;
                n2 = temp;
                if(cnt>n) {
                    for(int i=n2; i>1; i--) {
                        n1++; n2--; cnt--;
                        if(n==cnt) break;
                    }
                }
            } else if(n1%2==0&&n2==1) {
                n1++; cnt++;
            }
        }
        br.close();
        bw.flush();
        bw.close();
    }
}