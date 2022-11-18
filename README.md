# DSA-Star-Materials

## About:
Having all the materials in data structures and algorithms which anyone can ever think about. Find yourself in the ultimate abode of the coding world and get hold of everything you wanna know to learn coding. It has every question ever asked!

## Coding Problems:

### Problem-1:
```
#include<stdio.h>

int main()
{
    int a=5;
    while(a=5)
    return 0;
}
```
What will be the output of the following code? <br>
(a) abc is printed 1 time <br>
(b) Empty output <br>
(c) abc is printed infinite times <br>
(d) Compilation error

### Problem-2:
![Coding Problem No. 2](https://github.com/astrodestroyergithub/DSA-Star-Materials/blob/master/Assets/1.png)

### Problem-3:
![Coding Problem No. 3](https://github.com/astrodestroyergithub/DSA-Star-Materials/blob/master/Assets/2.png)

### Problem-4:
```
public class Task implements Runnable {
    private void do_stuff() {
        try {
            // Sleeps for 5 seconds
            Thread.sleep(5000);
        } catch(InterruptedException e) {}
    }
    public void run() {
        do_stuff();
    }

    public static void main(String[] args) {
        Thread[] task_array = { new Thread(new Task()),
                                new Thread(new Task()),
                                new Thread(new Task()),
                                new Thread(new Task()) };
        task_array[0].start();
        task_array[1].start();
        task_array[2].start();
        task_array[3].start();
        System.out.println("Done");
    }
}
```
![Coding Problem No. 4](https://github.com/astrodestroyergithub/DSA-Star-Materials/blob/master/Assets/3.png)

### Problem-5:
```
class Accounts {
    int balance[100];
    
    void deposit_salary(int emp_id, int sal) {
        balance[emp_id] += sal;
    }
    
    // assume that constructors and other methods of the Accounts
    // class have reasonable definitions. Assume that this is
    // written in a language that allows methods of a class
    // to be optionally defined as 'synchronized' (in which case no two
    // threads can be in the same method at the same time
};
```
![Coding Problem No. 5](https://github.com/astrodestroyergithub/DSA-Star-Materials/blob/master/Assets/4.png)

### Problem-6:
![Coding Problem No. 6](https://github.com/astrodestroyergithub/DSA-Star-Materials/blob/master/Assets/5.png) <br>
(a) var=100 <br>
(b) var=AI <br>
(c) var=0 <br>
(d) Error

### Problem-7:
![Coding Problem No. 7](https://github.com/astrodestroyergithub/DSA-Star-Materials/blob/master/Assets/6.png) <br>
(a) myName=ABCDEFG(size=7) <br>
(b) Error <br>
(c) myName=ABCDEFG(size=4) <br>
(d) myName=ABCDEFG(size=8)

### Problem-8:
![Coding Problem No. 8](https://github.com/astrodestroyergithub/DSA-Star-Materials/blob/master/Assets/7.png) <br>
(a) Error <br>
(b) 10,10,10,10 <br>
(c) 10,20,30,40 <br>
(d) AAA,BBB,CCC,DDD

### Problem-9:
![Coding Problem No. 9](https://github.com/astrodestroyergithub/DSA-Star-Materials/blob/master/Assets/8.png) <br>
(a) 0 1 2 ... 255 <br>
(b) 255 <br>
(c) 256 <br>
(d) blank screen as output

### Problem-10:
![Coding Problem No. 10](https://github.com/astrodestroyergithub/DSA-Star-Materials/blob/master/Assets/9.png) <br>
Find the output
(a) I have purchased ...: <br>
(b) I have purchased ...:Mobile, Lappy <br>
(c) I have purchased ...:Mobile <br>
(d) I have purchased ...:Lappy