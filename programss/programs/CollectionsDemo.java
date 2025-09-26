import java.util.ArrayList;
import java.util.HashMap;
import java.util.Hashtable;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

public class CollectionsDemo {
    public static void main(String args[]) {
        List<Integer> arr1 = new ArrayList<>();
        arr1.add(10);
        arr1.add(20);

        List<Integer> list = new LinkedList<>();
        list.add(30);
        list.add(40);

        Map<Integer, String> mp = new HashMap();
        mp.put(1, "hello");
        mp.put(null, "world");

        Map<Integer, String> mphb = new Hashtable<>();
        mphb.put(1, "hello");
        // mphb.put(null, "world");
        System.out.println("ArrayList elements:");
        for (int i = 0; i < arr1.size(); i++) {
            System.out.println(arr1.get(i));

        }
        System.out.println("\nLinkedList elements:");
        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }
        // Print HashMap
        System.out.println("\nHashMap elements:");
        for (Map.Entry<Integer, String> entry : mp.entrySet()) {
            System.out.println(entry.getKey() + " -> " + entry.getValue());
        }

        // Print Hashtable
        System.out.println("\nHashtable elements:");
        for (Map.Entry<Integer, String> entry : mphb.entrySet()) {
            System.out.println(entry.getKey() + " -> " + entry.getValue());
        }

        // String
        System.out.println("\nStrings in java:");
        String s1 = "Hello";
        s1.concat(" World"); // looks like it changes
        System.out.println(s1); // Output: Hello (NOT changed)

        String s2 = s1.concat(" World");
        System.out.println(s2); // Output: Hello World

        // StringBuilder
        StringBuilder sb = new StringBuilder("Hello");
        sb.append(" World");
        System.out.println(sb); // Hello World

        // StringBuffer
        StringBuffer sbf = new StringBuffer("Hello");
        sbf.append(" World");
        System.out.println(sbf); // Hello World

        // String is immutable (Immutability = thread-safety + security + caching.)
        String a1 = "Hello";
        String a2 = "Hello";
        System.out.println(a1 == a2); // returns true coz only one copy will be stored in scp(String Constant pool )in
                                      // JVM ,both a1 and a2 ref to the same memory location.

        String b1 = new String("Hello");
        String b2 = new String("Hello");
        System.out.println(b1 == b2); // returns false, coz two diff objects will be created in heap .
        System.out.println(b1.equals(b2)); // returns true , coz both objects contains same content.

        String c1 = new String("Hello");
        String c2 = c1.intern(); // Moves "Hello" to String Pool
        String c3 = "Hello";

        System.out.println(c2 == c3); // true (both in SCP)

    }
}