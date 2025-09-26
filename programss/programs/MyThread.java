class MyThread1 extends Thread {
    public void run() {
        System.out.println("Thread running: " + Thread.currentThread().getName());
    }
}

public class MyThread {
    public static void main(String[] args) {
        MyThread1 t1 = new MyThread1();
        MyThread1 t2 = new MyThread1();
        t1.start(); // start() creates a new thread and calls run()
        t2.start();

    }
}
