// 🔹 Encapsulation: keep variables private, access with getters/setters
class AnimalDetails {
    private String name; // private = hidden from outside
    private int age;

    public AnimalDetails(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }
}

// 🔹 Abstraction: abstract class hides "what every animal does"
abstract class Animal {
    AnimalDetails details;

    Animal(String name, int age) {
        this.details = new AnimalDetails(name, age);
    }

    abstract void makeSound(); // every animal must implement

    abstract void eat(); // common behavior but different impl
}

// 🔹 Inheritance: Dog and Cat inherit Animal
class Dog extends Animal {
    Dog(String name, int age) {
        super(name, age);
    }

    @Override
    void makeSound() {
        System.out.println(details.getName() + " says Woof! ");
    }

    @Override
    void eat() {
        System.out.println(details.getName() + " eats bones.");
    }
}

class Cat extends Animal {
    Cat(String name, int age) {
        super(name, age);
    }

    @Override
    void makeSound() {
        System.out.println(details.getName() + " says Meow! ");
    }

    @Override
    void eat() {
        System.out.println(details.getName() + " drinks milk.");
    }
}

// 🔹 Polymorphism demo
public class OOPDemoAnimal {
    public static void main(String[] args) {
        Animal a1 = new Dog("Leo", 3); // Leo is a Dog
        Animal a2 = new Cat("Simba", 2); // Simba is a Cat

        // Polymorphism: same method call behaves differently
        a1.makeSound(); // Woof
        a2.makeSound(); // Meow

        a1.eat(); // Dog eats bones
        a2.eat(); // Cat drinks milk
    }
}
