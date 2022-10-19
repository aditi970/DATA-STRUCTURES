public class Pack1 {
    protected void display(){
        System.out.println("Inside package com.juet and class Pack1");
    }
}
package com.jiet;

import com.juet.Pack1;

public class Pack2 {
    public static void main(String[] args) {
        Pack1 pack = new Pack1();
        pack.display();
    }
}
It will show error.

Rectification:
package com.jiet;
import com.juet.Pack1;
public class Pack2 extends Pack1{
    public static void main(String[] args) {
        Pack2 pack = new Pack2();
        pack.display();
    }
}
