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

    public static boolean isValid(String s) {
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


    public static String removeConsecutiveCharacter(String S){
        for(int i = 0; i < S.length()-1; i++){
            if(S.charAt(i) == S.charAt(i+1)){
                // System.out.println("istrue");
                S = S.substring(0,i) + S.substring(i+1);
            }
        }
        return S;
    }
    

    public static String longestCommonPrefix(String[] strs) {
        // String newStr = strs[0];
        // for(int i = 1; i < strs.length; i++){
        //     int len = newStr.length()>strs[i].length()?strs[i].length():newStr.length();
        //     String temp = "";
        //     for(int j = 0; j < len; j++){
        //         if(newStr.charAt(j)==strs[i].charAt(j)){
        //             temp += newStr.charAt(j);
        //         }else{
        //             break;
        //         }
        //     }
        //     if(temp.length()==0){
        //         return "";
        //     }
        //     newStr = temp;
        // }
        // return newStr;


        Arrays.sort(strs);
        String s1 = strs[0];
        String s2 = strs[strs.length -1];
        int i = 0;
        int idx = 0;
        while(i < s1.length() && i < s2.length()){
            if(s1.charAt(i)==s2.charAt(i)){
                idx++;
                i++;
            }else{
                break;
            }
        }
        return s1.substring(0,idx);
    }

    public static void main (String args[]){
        // Q no 1 check whether the given string is palindrome - DSA sheet
        // System.out.println(isPalindrome());

        // Q no 2 check whether the given string is anagram - DSA sheet 
        String s = "anagram";
        String t = "nagaram";
        // System.out.println(isAnagram(s,t));


        // Q no 3  Check whether the given string has all the parantheses close -DSA sheet 
        String str = "()[]{}";
        // System.out.println(isValid(str));

        // Q no 4 Romove all consecutive duplicates from string  - DSA sheet
        // System.out.println(removeConsecutiveCharacter(S));
        
        // Q no 5 find the longest common prefix of String array 
        String strs[]= {"flower","flow","flight"};
        System.out.println(longestCommonPrefix(strs));

    }
}
