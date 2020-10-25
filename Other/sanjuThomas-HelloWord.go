 // PROGRAM-NAME : Hello, World!
 // By Sanju Thomas
 // PROGRAM-CODE :

package main    // Package Declaration, every Go program must start with it
                // White Spaces or Newline or Tabs, Go mostly doesn't care about this
import "fmt"    // import is a keyword use to include code fro other package
                // fmt is package
                // use of double quotes like this is known as String literal

/* ======Function Declration Starts==== */

func main(){        // all functions start with keyword func followed by name of function
    fmt.Println("സുഖമാണോ സുഹൃത്തേ")  //function inside fmt package called Println
}

/* ======Function Declration Ends====== */
// OUTPUT:
//സുഖമാണോ സുഹൃത്തേ