//PROGRAM-NAME: Threads
// By Janet S
// PROGRAM- CODE:


class A extends Thread
{
      public void run()
     {
    try
    {
        while(true)
        {
           sleep(1000);
           System.out.println("good morning");
        }
    }
    catch(Exception e)
    { e.printStackTrace(); }
      }
}
class B extends Thread
{
       public void run()
      {
    try
    {
        while(true)
        {
        sleep(2000);
        System.out.println("hello");
        }
        }
      catch(Exception e)
    {  e.printStackTrace(); }
      }
}
class C extends Thread
{
      public void run()
     {
    try
    {
        while(true)
        {
            sleep(3000);
            System.out.println("welcome");
        }
    }
