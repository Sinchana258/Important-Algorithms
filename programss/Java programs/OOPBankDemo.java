//  Encapsulation: keep balance private
class Account {
    private String accountHolder;
    private double balance;

    public Account(String accountHolder, double balance) {
        this.accountHolder = accountHolder;
        this.balance = balance;
    }

    public String getAccountHolder() {
        return accountHolder;
    }

    public double getBalance() {
        return balance;
    }

    public void deposit(double amount) {
        balance += amount;
        System.out.println(amount + " deposited. New balance: " + balance);
    }

    public void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            System.out.println(amount + " withdrawn. New balance: " + balance);
        } else {
            System.out.println("Insufficient balance!");
        }
    }
}

// Abstraction: define a common structure
abstract class BankAccount {
    Account account;

    BankAccount(String name, double balance) {
        account = new Account(name, balance);
    }

    abstract void accountType();
}

// Inheritance: SavingsAccount & CurrentAccount inherit BankAccount
class SavingsAccount extends BankAccount {
    SavingsAccount(String name, double balance) {
        super(name, balance);
    }

    @Override
    void accountType() {
        System.out.println(account.getAccountHolder() + " has a Savings Account.");
    }
}

class CurrentAccount extends BankAccount {
    CurrentAccount(String name, double balance) {
        super(name, balance);
    }

    @Override
    void accountType() {
        System.out.println(account.getAccountHolder() + " has a Current Account.");
    }
}

// Polymorphism: different account behaves differently
public class OOPBankDemo {
    public static void main(String[] args) {
        BankAccount acc1 = new SavingsAccount("Chillzilla", 5000);
        BankAccount acc2 = new CurrentAccount("Leo", 10000);

        acc1.accountType(); // Savings account
        acc2.accountType(); // Current account

        // Encapsulated operations
        acc1.account.deposit(2000);
        acc1.account.withdraw(1000);

        acc2.account.deposit(5000);
        acc2.account.withdraw(20000); // will show insufficient balance
    }
}
