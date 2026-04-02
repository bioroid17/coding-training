import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer stringTokenizer = new StringTokenizer(br.readLine());
        
        int n = Integer.parseInt(stringTokenizer.nextToken());
        int m = Integer.parseInt(stringTokenizer.nextToken());

        long[] sumArr = new long[n+1];
        sumArr[0] = 0;

        stringTokenizer = new StringTokenizer(br.readLine());
        for(int i = 1; i <= n; i++){
            sumArr[i] = sumArr[i-1] + Integer.parseInt(stringTokenizer.nextToken());
        }
        for(int j = 0; j < m; j++){
            stringTokenizer = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(stringTokenizer.nextToken());
            int b = Integer.parseInt(stringTokenizer.nextToken());
            System.out.println(sumArr[b] - sumArr[a-1]);
        }
    }
}
