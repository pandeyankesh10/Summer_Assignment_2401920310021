
interface LibraryUser {
    void registerAccount();

    void requestBook();
}

class KidUser implements LibraryUser {

    int age;
    String bookType;

    public void registerAccount() {
        if (age < 12) {
            System.out.println("You have successfully registered under a Kids Account");
        } else {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    public void requestBook() {
        if (bookType.equalsIgnoreCase("Kids")) {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        } else {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

class AdultUser implements LibraryUser {

    int age;
    String bookType;

    public void registerAccount() {
        if (age > 12) {
            System.out.println("You have successfully registered under an Adult Account");
        } else {
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    public void requestBook() {
        if (bookType.equalsIgnoreCase("Fiction")) {
            System.out.println("Book Issued successfully, please return the book within 7 days");
        } else {
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}

public class Main {

    public static void main(String args[]) {

        KidUser k1 = new KidUser();
        KidUser k2 = new KidUser();

        k1.age = 10;
        k1.registerAccount();

        k2.age = 18;
        k2.registerAccount();

        System.out.println();

        k1.bookType = "Kids";
        k1.requestBook();

        k2.bookType = "Fiction";
        k2.requestBook();

        System.out.println();

        AdultUser ad1 = new AdultUser();
        AdultUser ad2 = new AdultUser();

        ad1.age = 5;
        ad1.registerAccount();

        ad2.age = 23;
        ad2.registerAccount();

        System.out.println();

        ad1.bookType = "Kids";
        ad1.requestBook();

        ad2.bookType = "Fiction";
        ad2.requestBook();
    }
}