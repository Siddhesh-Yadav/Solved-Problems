import javax.imageio.plugins.tiff.TIFFField;
import java.util.*;

public class StringEasy {
    public static boolean isPalindrome() {
        String s = "A man, a plan, a canal: Panama";
        s = s.toLowerCase();
        s = s.replaceAll("[^A-Za-z0-9]", "");
        s = s.replaceAll("\\s","");
        System.out.print(s);
        if(s == "") return true;
        for(int i = 0; i < s.length()/2;i++){
            if(s.charAt(i)!=s.charAt(s.length()-i-1)){
                System.out.println(i);
                return false;
            }
        }
        return true;
    }
    public static boolean isAnagram(String s, String t) {
        if(s.length()!= t.length()) return false;
        int arr1[] = new int[26];
        int arr2[]= new int[26];
        for(int i = 0;i< arr1.length;i++){
            arr1[i]=0;
            arr2[i]=0;
        }
        for(int i =0;i< s.length();i++){
            int idx1 = s.charAt(i) - 'a';
            int idx2 = t.charAt(i) - 'a';
            arr1[idx1]++;
            arr2[idx2]++;
        }
        for(int i = 0; i < arr1.length;i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
        return true;
    }

    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<Character>();
        for(int i = 0; i < s.length();i++){
            if(s.charAt(i)== '('|| s.charAt(i)=='{'|| s.charAt(i)=='['){
                stack.push(s.charAt(i));
            }
            else if (s.charAt(i)==')'){
                if(stack.isEmpty()||stack.pop()!='(') return false;
            }
            else if (s.charAt(i)=='}'){
                if(stack.isEmpty()||stack.pop()!='{') return false;
            }
            else if(s.charAt(i)==']'){
                if(stack.isEmpty()||stack.pop()!='[') return false;
            }
        }
        return stack.isEmpty()?true:false;
    }

    public static void main (String args[]){
        // System.out.println(isPalindrome());
        String s = "anagram";
        String t = "nagaram";
        // System.out.println(isAnagram(s,t));

        String str = "()[]{}";
        System.out.println(isValid(str));

    }
}
