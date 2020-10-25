// PROGRAM-NAME : Bubble Sort in Golang
// By Sanju Thomas
//  PROGRAM-CODE :

package main
 
import (
    "fmt"
    "math/rand"
    "time"
)
 
func main() {
 
    slice := generateSlice(20)
    fmt.Println("\n--- Unsorted --- \n\n", slice)
    bubblesort(slice)
    fmt.Println("\n--- Sorted ---\n\n", slice, "\n")
}
 
// Generates a slice of size, size filled with random numbers
func generateSlice(size int) []int {
 
    slice := make([]int, size, size)
    rand.Seed(time.Now().UnixNano())
    for i := 0; i < size; i++ {
        slice[i] = rand.Intn(999) - rand.Intn(999)
    }
    return slice
}
  
func bubblesort(items []int) {
    var (
        n = len(items)
        sorted = false
    )
    for !sorted {
        swapped := false
        for i := 0; i < n-1; i++ {
            if items[i] > items[i+1] {
                items[i+1], items[i] = items[i], items[i+1]
                swapped = true
            }
        }
        if !swapped {
            sorted = true
        }
        n = n - 1
    }
}


// OUPPUT

/* --- Unsorted ---
 *
 *  [86 -144 439 -228 277 -490 163 -448 255 663 122 -311 621 310 193 99 53 -462 239 -43]
 *
 * --- Sorted ---
 *
 *  [-490 -462 -448 -311 -228 -144 -43 53 86 99 122 163 193 239 255 277 310 439 621 663] */
