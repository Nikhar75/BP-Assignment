function countDigit(n)
{
    if (n/10 == 0)
        return 1;
    return 1 + countDigit(parseInt(n / 10));
}
 
// Driver code
var n = 595265;
console.log("Number of digits :" + countDigit(n));