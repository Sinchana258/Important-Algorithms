
import java.sql.Connection;
import java.sql.DriverManager;

public class jdbcConn {
    public static void main(String[] args) {
        // Change these according to your database
        String url = "jdbc:mysql://localhost:3306/mydb";
        String user = "root";
        String password = "password";

        try {
            // (Optional) Load driver class
            Class.forName("com.mysql.cj.jdbc.Driver");

            // Create connection
            Connection conn = DriverManager.getConnection(url, user, password);

            if (conn != null) {
                System.out.println("Connected to the database!");
            }

            // Close connection
            conn.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
