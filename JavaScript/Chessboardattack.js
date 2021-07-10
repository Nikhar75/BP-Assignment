// Function that returns true if the queen can attack the opponent
function canQueenAttack(qR, qC, oR, oC)
{
	// If queen and the opponent are in the same row
	if (qR == oR)
		return true;

	// If queen and the opponent are in the same column
	if (qC == oC)
		return true;

	// If queen can attack diagonally
	if (Math.abs(qR - oR) == Math.abs(qC - oC))
		return true;

	// Opponent is safe
	return false;
}

// Driver code

	var qR = 1, qC = 1;
	var oR = 3, oC = 2;
	
	
	if (canQueenAttack(qR, qC, oR, oC))
		console.log("True");
	else
		console.log("False");