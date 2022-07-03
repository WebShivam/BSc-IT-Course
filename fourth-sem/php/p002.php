// Write a function to calculate the factorial of a number (non-negative integer). The
function accept the number as an argument.
<?php
    function factorial($num){
        $fact = 1;
        for($i = 1; $i <= $num; $i++){
            $fact = $fact * $i;
        }
        return $fact;
    }
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>factorial using function</title>
</head>
<body>
    <form action="" method="post">
        <br><br><br>
        Enter the number whose factorial you want to calculate:  <input type="number" min="0" name="number" required/> <br><br>
        <input type="submit" name="submit" value="Submit ME!"/>
    </form>
    <?php
        if(isset($_POST['submit']) and $_POST['submit']=="Submit ME!")
        if($_POST){
            $number = $_POST['number'];
            echo "The factorial of ".$number." is ".factorial($number);
        }
    ?>
</body>
</html>