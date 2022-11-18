/* My space for testing and learning */

public class CODE4 implements Runnable {
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
        Thread[] task_array = { new Thread(new CODE4()),
                                new Thread(new CODE4()),
                                new Thread(new CODE4()),
                                new Thread(new CODE4()) };
        task_array[0].start();
        task_array[1].start();
        task_array[2].start();
        task_array[3].start();
        System.out.println("Done");
    }
}

/* The question is given below: 

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

The above code starts 4 threads, each of which runs a single Task. Each simply sleeps for 5 seconds and exits. (Note: even if you don't know much about thread programming in Java, you should be able to figure out the answer to this based on the following information: 1. Calling t.start() on a thread t starts execution of the thread and returns immediately. 2. A program exits after all its threads have completed successfully.) Which of the following statements are true:

Pick all that apply
(a) This program will print 'Done' almost immediately after it starts (i.e. After 0 seconds approximately.)
(b) This program will print 'Done' approximately 5 seconds after it starts
(c) This program will print 'Done' approximately 20 seconds after it starts
(d) This program will exit approximately 5 seconds after it starts
(e) This program will exit approximately 20 seconds after it starts

Ans: */