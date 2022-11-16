/* My space for testing and learning */

import java.util.ArrayList;
import java.util.Arrays;

public class CODE3 {
    static void filter(ArrayList<Integer> b) {
    int i=0;
    while(i<b.size())
        if(b.get(i)<0)
            b.remove(i);
        else
            i++;
    }
    public static void main(String args[]) {
        ArrayList<Integer> a = new ArrayList<Integer>(Arrays.asList(1,6,3,9,10));
        filter(a);
        System.out.print(a);
    }
}

/* The question is given below:

Which of the following statements is true? (Note: in Java, an ArrayList is not implemented as a linked list. It is a regular array, but provides methods of the List interface. Based on this information, you should be able to answer this question even if you don't know Java.)

Pick all that apply
(a) The running time complexity of this program is O(n)
(b) The running time complexity of this program is O(n log n)
(c) The running time complexity of this program is O(n^2)
(d) Such a program can never work because it is modifying the same array that is looping over
(e) Such a program can never work because such a remove method cannot be implemented for an array

Ans: 
 */