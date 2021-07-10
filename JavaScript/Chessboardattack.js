// Function that returns true if the queen can attack the opponent
function canQueenAttack(qB, qW, oB, oW)
{
	// If queen and the opponent are in the same row
	if (qB == oB)
		return true;

	// If queen and the opponent are in the same column
	if (qW == oW)
		return true;

	// If queen can attack diagonally
	if (Math.abs(qB - oB) == Math.abs(qW - oW))
		return true;

	// Opponent is safe
	return false;
}

// Driver code

	var qB = 1, qW = 1;
	var oB = 3, oW = 2;
	
	
	if (canQueenAttack(qB, qW, oB, oW))
		console.log("True");
	else
		console.log("False");
