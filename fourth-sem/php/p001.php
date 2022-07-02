//Create a PHP page using functions for comparing three integers and print the largest
number.
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>compare three int</title>
</head>
<body>
    <form action="" method ="post">
        Enter 3 Numbers: <br>
        Number 1: <input type="number" min="0" name="num1" required> <br>
        Number 2: <input type="number" min="0" name="num2" required> <br>
        Number 3: <input type="number" min="0" name="num3" required> <br>
    </form>    
    <?php
        if(isset($_POST['submit']) and $_POST['submit']=="Submit ME!")

        if($_POST){

			$num1 = $_POST['num1'];
			$num2 = $_POST['num2'];
			$num3 = $_POST['num3'];

            
            if (($num2 > $num1) and ($num2 > $num3)){
                echo "".$num2. " is the greatest of all number ";
            } 
            if (($num3 > $num1) and ($num3 > $num2)){
                echo "".$num3. " is the greatest of all number <br>"; 
            } 
            
			elseif ($num1 == $num2)
				echo "" .$num1. " is the greatest number"; 
			elseif ($num2 == $num3)
				echo "" .$num2. " is the greatest number"; 
			elseif ($num1 == $num3)
				echo "" .$num3. " is the greatest number"; 

        	else{
            	echo  "".$num1." is the greatest of all numbers";
        	}


        }
    ?>
</body>
</html>