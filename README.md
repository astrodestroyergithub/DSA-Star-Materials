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