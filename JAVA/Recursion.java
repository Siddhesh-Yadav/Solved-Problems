import java.util.Currency;

// import java.util.Scanner;

class Recursion{
    public static int sum (int n ){
        if(n == 1){
            return 1;
        }
        return n * sum(n-1);
        
    }

    public static int power (int x, int n){
        if(x == 0){
            return 0;
        }
        if(n == 0){
            return 1;
        }
        int xPown = power(x, n -1); 
        int result = x  * xPown;
        return result;

        // if(n % 2 == 0){
        //     return power(x, n/2) * power(x, n/2);   
        // }else{
        //     return power(x, n/2) * power(x, n/2)* x;
        // }
    }
    public static int fId = -1;
    public static int lId = -1;

    public static void firstAndLastOccurance(char a, String str, int idx){
        if(idx == str.length()){
            System.out.println("first "+fId+" last "+lId);
            return;
        }
        char curnt = str.charAt(idx);
        if(curnt == a){
            if(fId == -1){
                fId = idx;
            }else{
                lId = idx;
            }
        }
        firstAndLastOccurance(a, str, idx + 1);
    }


    public static boolean checkSorted(int arr[],int idx){
        if(idx == arr.length -1 ){
            return true;
        }
        if(arr[idx] > arr[idx + 1]){
            return false;
        }
        return checkSorted(arr, idx +1);
        // return false;
    }

    public static void shiftXtoEnd(String str, int count,int idx, String newStr){
        if(idx == str.length()){
            for (int i = 0; i < count; i++) {
                newStr += 'x';
            }
            System.out.println(newStr);
            return;
        }
        char curnt = str.charAt(idx);
        if(curnt == 'x'){
            count++;
        }else{
            newStr += curnt;
        }
        shiftXtoEnd(str, count, idx + 1, newStr);
    }

    public static boolean bool[]= new boolean[26];

    public static void removeDups(String str, int id, String newStr){
        if(id== str.length()){
            System.out.println(newStr);
            return;
        }
        char curnt = str.charAt(id);
        if(bool[curnt - 'a']){
            removeDups(str, id + 1, newStr);
        }else{
            bool[curnt - 'a']= true;
            newStr += curnt;
            removeDups(str, id +1, newStr);
        }
    }

    private static void subSeq(String str, int i, String newStr) {
        if(i == str.length()){
            System.out.println(newStr);
            return;
        }
        char curnt = str.charAt(i);
        subSeq(str,i+1,newStr + curnt);
        subSeq(str,i+1,newStr);
    }

    private static String[] keypad = {".","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
    private static void keypadCombs(String nums, int idx, String result){
        if(nums.length()  == idx){
            System.out.println(result);
            return ;
        }        
        char curnt = nums.charAt(idx);
        String mapping = keypad[curnt - '0'];//to convert char to int;
        for (int i = 0; i < mapping.length(); i++) {
            keypadCombs(nums, idx + 1, result  + mapping.charAt(i));
        }
    }

    public static void permutaions( String str, String combinations){
        if(str.length() == 0){
            System.out.println(combinations);
            return;
        }
        for(int i = 0; i < str.length(); i++){
            char curnt = str.charAt(i);
            String newStr = str.substring(0, i) + str.substring(i + 1);
            permutaions( newStr, combinations + curnt);

        }
    }
    
    public static void main (String args[]){
        // System.out.println( sum(5));
        // long start = System.currentTimeMillis();
        // System.out.println(power(2,30));
        // long finish = System.currentTimeMillis();
        // long timeElapsed = finish - start;
        // System.out.println(timeElapsed);
        // String str ="sadkdioosa";
        // firstAndLastOccurance('a',str,0);
        // int arr[]={1,2,3,4,5,3};
        // System.out.println(checkSorted(arr,0));

        // String str = "axbxxcd";
        // shiftXtoEnd(str,0,0,"");

        // String str = "abaadccd";
        // removeDups(str,0,"");

        // String str = "abc";
        // subSeq(str, 0,"");

        // keypadCombs("34",0,"");

        String str  = "abc";
        permutaions(str,"");
        
    }

}