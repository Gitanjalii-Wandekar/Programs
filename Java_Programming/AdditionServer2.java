import java.util.*;
import java.io.*;       
import java.net.*;      

class AdditionServer2
{
    public static void main(String A[]) throws Exception
    {
        System.out.println("Server is running..."); 
        ServerSocket ssobj = new ServerSocket(2100);        //Server is running on this port location
        System.out.println("Server is waiting at port number 2100");
        Socket sobj = ssobj.accept();                             //Server will accept the request send by the client
        System.out.println("Client request arrise and accepted by the server");

        DataInputStream diobj = new DataInputStream(sobj.getInputStream());
        DataOutputStream doobj = new DataOutputStream(sobj.getOutputStream());
    }
}