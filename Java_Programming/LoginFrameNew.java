import java.swing.*;

import java.awt.event.*;

class AdditionFrame implements ActionListener
{
    private JFrame fobj;
    private JButton bobj;
    private JTextField tobj;
    private JTextField pobj;
    private JLabel Userlabel1, Userlabel2, Resultlabel;

    public AdditionFrame(String title, int width, int height)
    {
        fobj = new JFrame(title);
        fobj.setSize(width,height);

        Userlabel1 = new JLabel("Number1");
        Userlabel1.setBounds(50,50,100,30);

        tobj = new JTextField();                    //textfield of user name
        tobj.setBounds(150,50,150,30);

        Userlabel2 = new JLabel("Number2");
        Userlabel2.setBounds(50,100,100,30);

        pobj = new JTextField();                    //textfield of user name
        pobj.setBounds(170,50,150,30);

        bobj = new JButton("+");
        bobj.setBounds(150,150,100,30);

        Resultlabel = new JLabel("");
        Resultlabel.setBounds(150,200,250,30);

        fobj.add(bobj);
        fobj.add(tobj);
        fobj.add(pobj);
        fobj.add(Userlabel1);
        fobj.add(Userlabel2);
        fobj.add(Resultlabel);

        bobj.addActionListener(this);

        fobj.setLayout(null);
        fobj.setSize(width,height);

        fobj.setVisible(true);
        fobj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
    }
    public void actionPerformed(ActionEvent aobj)
    {
        
            String Number1Text = tobj.getText();
            String Number2Text = pobj.getText();

            int Number1 = Integer.parseInt(Number1Text);
            int Number2 = Integer.parseInt(Number2Text);

            int Result = Number1 + Number2;

            Resultlabel.setText("Result : "+Result);
        
    }
        
        
}

class LoginFrameNew
{   
      public static void main(String A[])
      {
            AdditionFrame aobj = new AdditionFrame("Addition",400,300);
      }


}