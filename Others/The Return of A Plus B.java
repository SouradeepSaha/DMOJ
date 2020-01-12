import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in, "UTF-8");
        
        int l = input.nextInt();
        input.nextLine(); //clear

        int [] a = new int [l];
        int [] b = new int [l];
        String [] en = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
        String [] fr = {"un", "deux", "trois", "quatre", "cinq", "six", "sept", "huit", "neuf", "dix"};
        String [] cn = {"一", "二", "三", "四", "五", "六", "七", "八", "九", "十"};
        
        for(int i=0;i<l;i++){
            String c = input.nextLine();
            String [] temp = c.split(" ");

            if(temp[0].matches("\\d+")){ a[i] = Integer.parseInt(temp[0]);}
            else{
                for(int ii=0;ii<10;ii++){
                    if((temp[0].equals(en[ii]))||(temp[0].equals(fr[ii]))||(temp[0].equals(cn[ii]))) {
                        a[i]=ii+1;}}}
            if(temp[1].matches("\\d+")){ b[i] = Integer.parseInt(temp[1]);}
            else{
                for(int ii=0;ii<10;ii++){
                    if((temp[1].equals(en[ii]))||(temp[1].equals(fr[ii]))||(temp[1].equals(cn[ii]))) {
                        b[i]=ii+1;}}}
        }
        for(int i=0;i<l;i++) System.out.println(a[i]+b[i]);
    }
}
