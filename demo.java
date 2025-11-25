import java.net.*;
public class demo{
    public static void main(String[] args) {
        try {
            InetAddress inetAddress = InetAddress.getByName("www.example.com");
            System.out.println("Host Name: " + inetAddress.getHostName());
            System.out.println("IP Address: " + inetAddress.getHostAddress());
        } catch (UnknownHostException e) {
            System.out.println("Host not found: " + e.getMessage());
        }
    }
}