import java.util.Base64;
import java.util.Scanner;
public class test {
    public static String awesome(){
        byte[] toreturn = Base64.getDecoder().decode("SkFWQXtoNGg0aDR9");
        String m = new String(toreturn);
        return m;
    }
    public static void main(String[] args) {
        Scanner userInp = new Scanner(System.in);
        while(true){
            System.out.println("password: "); 
            String pass = userInp.next();
            if(pass.equals(awesome())){
                System.out.println("Nice one!!!");
                userInp.close();
                break;
            }
            else {
                System.out.println("Keep coding ;)");
            }
            System.out.println("your password is " + pass);
        }
    }
}