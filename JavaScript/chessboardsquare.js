

// Java find number of squares in a
// chessboard

// Function to return count of squares;
function countSquares( n)
{
	// A better way to write n*(n+1)*(2n+1)/6
	return (n * (n + 1) / 2) * (2*n + 1) / 3;
}

// Driver Code

let n = 4;
console.log("Count of squares is " + countSquares(n));

