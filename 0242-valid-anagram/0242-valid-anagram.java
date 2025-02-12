class Solution {
    public boolean isAnagram(String s, String t) {

        char [] schar=s.toCharArray();
        char [] tchar=t.toCharArray();

        Arrays.sort(sChar);
        Array.sort(tChar);
        return Arrays.equals(sChar,tChar);

        
    }
};